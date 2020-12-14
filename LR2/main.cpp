#include <iostream>
#include <string>
#include <stack>

std::stack<std::string> reverseStack(std::stack<std::string> stack) {
    std::stack<std::string> newStack;

    while (!stack.empty()) {
        std::string value = stack.top();
        stack.pop();
        newStack.push(value);
    }

    return newStack;
}

float calculate(std::stack<std::string> stack) {
    stack = reverseStack(stack);
    std::stack<std::string> subStack; 
    
    while (!stack.empty()) {
        std::string value = stack.top();
        stack.pop();
        if (value == "+") {
            float value2 = std::stof(subStack.top());
            subStack.pop();
            float value1 = std::stof(subStack.top());
            subStack.pop();
            // std::cout << value1 << "+" << value2 << std::endl;
            subStack.push(std::to_string(value1 + value2));
        } else if (value == "-") {
            float value2 = std::stof(subStack.top());
            subStack.pop();
            float value1 = std::stof(subStack.top());
            subStack.pop();
            // std::cout << value1 << "-" << value2 << std::endl;
            subStack.push(std::to_string(value1 - value2));
        } else if (value == "*") {
            float value2 = std::stof(subStack.top());
            subStack.pop();
            float value1 = std::stof(subStack.top());
            subStack.pop();
            // std::cout << value1 << "*" << value2 << std::endl;
            subStack.push(std::to_string(value1 * value2));
        } else if (value == "/") {
            float value2 = std::stof(subStack.top());
            subStack.pop();
            float value1 = std::stof(subStack.top());
            subStack.pop();
            // std::cout << value1 << "/" << value2 << std::endl;
            if (value2 == 0) {
                throw "Not cool dividing";
            }
            subStack.push(std::to_string(value1 / value2));
        } else {
            subStack.push(value);
        }
    }

    return std::stof(subStack.top());
}

int main() {
    std::stack<std::string> stack1;
    // 11 * (7 + 4) - 74
    stack1.push("11");
    stack1.push("7");
    stack1.push("4");
    stack1.push("+");
    stack1.push("*");
    stack1.push("74");
    stack1.push("-");

    std::cout << calculate(stack1) << std::endl;

    std::stack<std::string> stack2;
    // (7 + 2) / (3 * 3) / 0
    stack2.push("7");
    stack2.push("2");
    stack2.push("+");
    stack2.push("3");
    stack2.push("3");
    stack2.push("*");
    stack2.push("/");
    stack2.push("0");
    stack2.push("/");
    try {
        std::cout << calculate(stack2) << std::endl;
    } catch (char const *err) {
        std::cout << "Error: " << err << std::endl;
    }

    return 0;
}

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

int calculate(std::stack<std::string> stack) {
    stack = reverseStack(stack);
    std::stack<std::string> subStack; 
    
    while (!stack.empty()) {
        std::string value = stack.top();
        stack.pop();
        if (value == "+") {
            int value2 = std::stoi(subStack.top());
            subStack.pop();
            int value1 = std::stoi(subStack.top());
            subStack.pop();
            subStack.push(std::to_string(value1 + value2));
        } else if (value == "-") {
            int value2 = std::stoi(subStack.top());
            subStack.pop();
            int value1 = std::stoi(subStack.top());
            subStack.pop();
            subStack.push(std::to_string(value1 - value2));
        } else if (value == "*") {
            int value2 = std::stoi(subStack.top());
            subStack.pop();
            int value1 = std::stoi(subStack.top());
            subStack.pop();
            subStack.push(std::to_string(value1 * value2));
        } else {
            subStack.push(value);
        }
    }

    return std::stoi(subStack.top());
}

int main() {
    std::stack<std::string> stack;
    // 11 * (7 + 4) - 74
    stack.push("11");
    stack.push("7");
    stack.push("4");
    stack.push("+");
    stack.push("*");
    stack.push("74");
    stack.push("-");

    std::cout << calculate(stack) << std::endl;
    return 0;
}

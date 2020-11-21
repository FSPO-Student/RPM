#include <iostream>
#include <string>
#include <fstream>
#include "Pokemon.hpp"

int writeFile(std::string filename, std::string data) {
    std::ofstream stream;
    stream.open(filename);
    if (stream.is_open()) {
        stream << data;
        return 0;
    } else {
        return 1;
    }
}

int main() {
    Pokemon pokemon("Pokemon 1", 100, 30, 30, 30);
    Bulbasaur bulbasaur;
    Charmander charmander;

    // printPokemonData(pokemon);
    // printPokemonData(bulbasaur);
    // printPokemonData(charmander);
    //
    // std::cout << generatePokemonDataAsXML(pokemon) << std::endl;
    // std::cout << generatePokemonDataAsXML(bulbasaur) << std::endl;
    // std::cout << generatePokemonDataAsXML(charmander) << std::endl;

    writeFile("pokemon.xml", generatePokemonDataAsXML(pokemon));
    writeFile("bulbasaur.xml", generatePokemonDataAsXML(bulbasaur));
    writeFile("charmander.xml", generatePokemonDataAsXML(charmander));

    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
#include "Pokemon.hpp"

Pokemon::Pokemon(std::string name, int hp, int attack, int defense, int speed) {
    name_ = name;
    hp_ = hp;
    attack_ = attack;
    defense_ = defense;
    speed_ = speed;
}

void Pokemon::setName(std::string name) { name_ = name; }
void Pokemon::setHp(int hp) { hp_ = hp; }
void Pokemon::setAttack(int attack) { attack_ = attack; }
void Pokemon::setDefense(int defense) { defense_ = defense; }
void Pokemon::setSpeed(int speed) { speed_ = speed; }

std::string Pokemon::getName() { return name_; }
int Pokemon::getHp() { return hp_; }
int Pokemon::getAttack() { return attack_; }
int Pokemon::getDefense() { return defense_; }
int Pokemon::getSpeed() { return speed_; }

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", 200, 30, 50, 20) {}
const std::string Bulbasaur::specialAttack = "poison";
const std::string Bulbasaur::specialDefense = "overgrow";

Charmander::Charmander() : Pokemon("Charmander", 100, 55, 20, 30) {}
const std::string Charmander::specialAttack = "blaze";
const std::string Charmander::specialDefense = "none";

Squirtle::Squirtle() : Pokemon("Squirtle", 150, 40, 30, 25) {}
const std::string Squirtle::specialAttack = "torrent";
const std::string Squirtle::specialDefense = "water armor";

void printPokemonData(Pokemon pokemon) {
    std::cout
        << pokemon.getName() << ", "
        << pokemon.getHp() << ", "
        << pokemon.getAttack() << ", "
        << pokemon.getDefense() << ", "
        << pokemon.getSpeed() << std::endl;
}

void printPokemonData(Bulbasaur pokemon) {
    std::cout
        << pokemon.getName() << ", "
        << pokemon.getHp() << ", "
        << pokemon.getAttack() << ", "
        << pokemon.getDefense() << ", "
        << pokemon.getSpeed() << ", "
        << "Special attack: " << pokemon.specialAttack << ", "
        << "Special defense: " << pokemon.specialDefense << std::endl;
}

void printPokemonData(Charmander pokemon) {
    std::cout
        << pokemon.getName() << ", "
        << pokemon.getHp() << ", "
        << pokemon.getAttack() << ", "
        << pokemon.getDefense() << ", "
        << pokemon.getSpeed() << ", "
        << "Special attack: " << pokemon.specialAttack << ", "
        << "Special defense: " << pokemon.specialDefense << std::endl;
}

void printPokemonData(Squirtle pokemon) {
    std::cout
        << pokemon.getName() << ", "
        << pokemon.getHp() << ", "
        << pokemon.getAttack() << ", "
        << pokemon.getDefense() << ", "
        << pokemon.getSpeed() << ", "
        << "Special attack: " << pokemon.specialAttack << ", "
        << "Special defense: " << pokemon.specialDefense << std::endl;
}

std::string generatePokemonDataAsXML(Pokemon pokemon) {
    std::stringstream dataStream;
    dataStream
        << "<Pokemon>"
            << "<name>" << pokemon.getName() << "</name>"
            << "<hp>" << pokemon.getHp() << "</hp>"
            << "<attack>" << pokemon.getAttack() << "</attack>"
            << "<defense>" << pokemon.getDefense() << "</defense>"
            << "<speed>" << pokemon.getSpeed() << "</speed>"
        << "</Pokemon>";
    return dataStream.str();
}

std::string generatePokemonDataAsXML(Bulbasaur pokemon) {
    std::stringstream dataStream;
    dataStream
        << "<Pokemon>"
            << "<name>" << pokemon.getName() << "</name>"
            << "<hp>" << pokemon.getHp() << "</hp>"
            << "<attack>" << pokemon.getAttack() << "</attack>"
            << "<defense>" << pokemon.getDefense() << "</defense>"
            << "<speed>" << pokemon.getSpeed() << "</speed>"
            // << "<specialAttack>" << pokemon.specialAttack << "</specialAttack>"
            // << "<specialDefense>" << pokemon.specialDefense << "</specialDefense>"
        << "</Pokemon>";
    return dataStream.str();
}

std::string generatePokemonDataAsXML(Charmander pokemon) {
    std::stringstream dataStream;
    dataStream
        << "<Pokemon>"
            << "<name>" << pokemon.getName() << "</name>"
            << "<hp>" << pokemon.getHp() << "</hp>"
            << "<attack>" << pokemon.getAttack() << "</attack>"
            << "<defense>" << pokemon.getDefense() << "</defense>"
            << "<speed>" << pokemon.getSpeed() << "</speed>"
            << "<specialAttack>" << pokemon.specialAttack << "</specialAttack>"
            << "<specialDefense>" << pokemon.specialDefense << "</specialDefense>"
        << "</Pokemon>";
    return dataStream.str();
}

std::string generatePokemonDataAsXML(Squirtle pokemon) {
    std::stringstream dataStream;
    dataStream
        << "<Pokemon>"
            << "<name>" << pokemon.getName() << "</name>"
            << "<hp>" << pokemon.getHp() << "</hp>"
            << "<attack>" << pokemon.getAttack() << "</attack>"
            << "<defense>" << pokemon.getDefense() << "</defense>"
            << "<speed>" << pokemon.getSpeed() << "</speed>"
            << "<specialAttack>" << pokemon.specialAttack << "</specialAttack>"
            << "<specialDefense>" << pokemon.specialDefense << "</specialDefense>"
        << "</Pokemon>";
    return dataStream.str();
}

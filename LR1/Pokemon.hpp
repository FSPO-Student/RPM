#ifndef PokemonH
#define PokemonH

#include <string>

class Pokemon {
    private:
        std::string name_;
        int hp_;
        int attack_;
        int defense_;
        int speed_;

    public:
        Pokemon(std::string name, int hp, int attack, int defense, int speed);

        void setName(std::string name);
        void setHp(int hp);
        void setAttack(int attack);
        void setDefense(int defense);
        void setSpeed(int speed);

        std::string getName();
        int getHp();
        int getAttack();
        int getDefense();
        int getSpeed();
};

class Bulbasaur : public Pokemon {
    public:
        Bulbasaur();

        static const std::string specialAttack;
        static const std::string specialDefense;
};

class Charmander : public Pokemon {
    public:
        Charmander();

        static const std::string specialAttack;
        static const std::string specialDefense;
};

class Squirtle : public Pokemon {
    public:
        Squirtle();

        static const std::string specialAttack;
        static const std::string specialDefense;
};

void printPokemonData(Pokemon pokemon);
void printPokemonData(Bulbasaur pokemon);
void printPokemonData(Charmander pokemon);
void printPokemonData(Squirtle pokemon);

std::string generatePokemonDataAsXML(Pokemon pokemon);
std::string generatePokemonDataAsXML(Bulbasaur pokemon);
std::string generatePokemonDataAsXML(Charmander pokemon);
std::string generatePokemonDataAsXML(Squirtle pokemon);

#endif

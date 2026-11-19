//
// Created by jan on 12/11/2026.
//

#include "Pozycja.hpp"

Pozycja::Pozycja(int id, const std::string& tytul, int rokWydania)
    : id(id), tytul(tytul), rokWydania(rokWydania), wypozyczona(false)
{
    if (id <= 0) {
        throw std::invalid_argument("ID musi być dodatnie");
    }

    if (tytul.empty()) {
        throw std::invalid_argument("Tytuł nie może być pusty");
    }

    if (rokWydania <= 0) {
        throw std::invalid_argument("Nieprawidłowy rok wydania");
    }
}

int Pozycja::getId() const {
    return id;
}

const std::string& Pozycja::getTitle() const{
    return tytul;
}
int Pozycja::getRelease() const{
    return rokWydania;
}
bool Pozycja::isWypozyczona() const{
    return wypozyczona;
}

void Pozycja::wypozycz(){
    if(isWypozyczona()){
        throw std::invalid_argument("Już wypożyczona");
    }
    else{
        wypozyczona = true;
    }
}

void Pozycja::zwroc(){
    if(!isWypozyczona()){
        throw std::invalid_argument("Nie jest wypożyczona");
    }
    else{
        wypozyczona = false;
    }
}
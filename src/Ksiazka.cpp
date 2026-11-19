//
// Created by jan on 12/11/2026.
//

#include "Ksiazka.hpp"

Ksiazka(int id, const std::string& tytul, int rokWydania, const std::string& autor, const std::string& isbn, int liczbaStron) :
Pozycja(id, tytul, rokWydania), autor(autor), isbn(isbn), liczbaStron(liczbaStron) {}

std::string opis() {return getTitle() + " (" + std::to_string(getRelease()) + ")";}
std::string getTyp() const {return "Książka"};

const std::string& getAutor() const {return autor;}
const std::string& getISBN() const {return isbn;}
int getLiczbaStron() const {return liczbaStron;}
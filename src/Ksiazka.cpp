//
// Created by jan on 12/11/2026.
//

#include "Ksiazka.hpp"

Ksiazka::Ksiazka(int id, const std::string& tytul, int rokWydania, const std::string& autor, const std::string& isbn, int liczbaStron) :
Pozycja(id, tytul, rokWydania), Autor(autor), isbn(isbn), liczbaStron(liczbaStron) {}

std::string Ksiazka::opis() const {return getTitle() + " (" + std::to_string(getRelease()) + ")";}
std::string Ksiazka::getTyp() const {return "Książka";}

const std::string& Ksiazka::getAutor() const {return Autor;}
const std::string& Ksiazka::getISBN() const {return isbn;}
int Ksiazka::getLiczbaStron() const {return liczbaStron;}
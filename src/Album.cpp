//
// Created by jan on 12/11/2026.
//

#include "Album.hpp"

Album::Album(int id, const std::string& tytul, int rokwydania, const std::string& format, const std::string& autor,
const std::string& gatunek, const std::string& wydawca) : Pozycja(id, tytul, rokWydania), format(format), autor(autor)
{
    if(format != "LP" && format != "CD" && format != "Kaseta" && format != "8-Track" && format != "Digital"){
        return std::invalid_argument("Niepoprawny format");
    }
}


std::string Album::opis() const {return getTitle() + " (" + std::to_string(getRelease()) + ")";}
std::string Album::getTyp() const {return "Album";}

const std::string& Album::getFormat() const {return format;}
const std::string& Album::getAutor() const {return autor;}
const std::string& Album::getGatunek() const {return gatunek;}
const std::string& Album::getWydawca() const {return wydawca;}
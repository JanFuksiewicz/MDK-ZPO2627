//
// Created by jan on 12/11/2026.
//

#include "Film.hpp"

Film::Film(int id, const std::string& tytul, int rokwydania, const std::string& rezyser, const std::string& genre,
const std::string& format) : Pozycja(id, tytul, rokwydania), rezyser(rezyser), genre(genre), format(format){
    if(format != "VCD" && format != "DVD" && format != "Blu-ray" && format != "Digital" && format != "VHS" && format != "Betamax"){
        throw std::invalid_argument("Błędny format");
    }
}


std::string Film::opis() const {return getTitle() + " (" + std::to_string(getRelease()) + ")";}
std::string Film::getTyp() const {return "Film";}

const std::string& Film::getRezyser() const {return rezyser;}
const std::string& Film::getGenre() const {return genre;}
const std::string& Film::getFormat() const {return format;}
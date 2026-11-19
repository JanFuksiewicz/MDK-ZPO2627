//
// Created by jan on 12/11/2026.
//

#include "Gra.hpp"

Gra::Gra(int id, const std::string& tytul, int rokWydania, const std::string& platforma, const std::string& wydawca,
const std::string& genre, bool mp, int ageRating, const std::string& producent, const std::string& region) :
Pozycja(id, tytul, rokWydania), platforma(platforma), wydawca(wydawca),
genre(genre), producent(producent), region(region), mp(mp), ageRating(ageRating)
{
	if(region != "NTSC-J" && region != "NTSC-U" && region != "PAL"){
		throw std::invalid_argument("Niepoprawny region");
	}
}

std::string Gra::opis() const {return getTitle() + " (" + std::to_string(getRelease()) + ")";}
std::string Gra::getTyp() const {return "Gra";}

const std::string& Gra::getPlatforma() const {return platforma;}
const std::string& Gra::getProducent() const {return producent;}
int Gra::getAgeRating() const {return ageRating;}
const std::string& Gra::getWydawca() const {return wydawca;}
const std::string& Gra::getGenre() const {return genre;}
bool Gra::getMP() const {return mp;}
const std::string& Gra::getRegion() const {return region;}
//
// Created by jan on 12/11/2026.
//

#ifndef MDK_ZPO2627_GRA_HPP
#define MDK_ZPO2627_GRA_HPP

#include "Pozycja.hpp"

class Gra : public Pozycja
{
private:
    std::string platforma;
    std::string wydawca;
    std::string genre;
    std::string producent;
    std::string region;
    bool mp;
    int ageRating;
public:
    Gra(int id, const std::string& tytul, int rokWydania, const std::string& platforma, const std::string& wydawca, const std::string& genre, bool mp, int ageRating, const std::string& producent, const std::string& region);

    std::string opis() const override;
    std::string getTyp() const override;

    const std::string& getPlatforma() const;
    const std::string& getProducent() const;
    int getAgeRating() const;
    const std::string& getWydawca() const;
    const std::string& getGenre() const;
    bool getMP() const;
    const std::string& getRegion() const;
};


#endif //MDK_ZPO2627_GRA_HPP
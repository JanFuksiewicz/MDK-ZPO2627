//
// Created by jan on 12/11/2026.
//

#ifndef MDK_ZPO2627_FILM_HPP
#define MDK_ZPO2627_FILM_HPP

#include "Pozycja.hpp"

class Film : public Pozycja
{
private:
    std::string rezyser;
    std::string genre;
    std::string format;
public:
    Film(int id, const std::string& tytul, int rokwydania, const std::string& rezyser, const std::string& genre, const std::string& format);

    std::string opis() const override;
    std::string getTyp() const override;

    const std::string& getRezyser() const;
    const std::string& getGenre() const;
    const std::string& getFormat() const;
};


#endif //MDK_ZPO2627_FILM_HPP
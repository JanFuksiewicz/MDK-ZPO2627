//
// Created by jan on 12/11/2026.
//

#ifndef MDK_ZPO2627_ALBUM_HPP
#define MDK_ZPO2627_ALBUM_HPP

#include "Pozycja.hpp"

class Album : public Pozycja
{
private:
    std::string format;
    std::string autor;
    std::string gatunek;
    std::string wydawca;
public:
    Album(int id, const std::string& tytul, int rokwydania, const std::string& format, const std::string& autor, const std::string& gatunek, const std::string& wydawca);

    std::string opis() const override;
    std::string getTyp() const override;

    const std::string& getFormat() const;
    const std::string& getAutor() const;
    const std::string& getGatunek() const;
    const std::string& getWydawca() const;
};


#endif //MDK_ZPO2627_ALBUM_HPP
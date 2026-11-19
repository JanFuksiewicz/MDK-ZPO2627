//
// Created by jan on 12/11/2026.
//

#ifndef MDK_ZPO2627_KSIAZKA_HPP
#define MDK_ZPO2627_KSIAZKA_HPP

#include "Pozycja.hpp"

class Ksiazka : public Pozycja
{
private:
    std::string Autor;
    std::string isbn;
    int liczbaStron;
public:
    Ksiazka(int id, const std::string& tytul, int rokWydania, const std::string& autor, const std::string& isbn, int liczbaStron);

    std::string opis() const override;
    std::string getTyp() const override;

    const std::string& getAutor() const;
    const std::string& getISBN() const;
    int getLiczbaStron() const;
};


#endif //MDK_ZPO2627_KSIAZKA_HPP
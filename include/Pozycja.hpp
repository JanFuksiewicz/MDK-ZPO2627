//
// Created by jan on 12/11/2026.
//

#ifndef MDK_ZPO2627_POZYCJA_HPP
#define MDK_ZPO2627_POZYCJA_HPP

#include <string>

class Pozycja
{
private:
    int id;
    std::string tytul;
    int rokWydania;
    bool wypozyczona;
public:
    Pozycja(int id, const std::string& tytul, int rokwydania);

    virtual ~Pozycja() = default;

    int getId() const;
    const std::string& getTitle() const;
    int getRelease() const;
    bool isWypozyczona() const;

    void wypozycz();
    void zwroc();

    virtual std::string opis() const = 0;
    virtual std::string getTyp() const = 0;
};


#endif //MDK_ZPO2627_POZYCJA_HPP
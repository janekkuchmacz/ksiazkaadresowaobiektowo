#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>


#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer (nazwaPlikuZUzytkownikami) {
   uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
};

#endif

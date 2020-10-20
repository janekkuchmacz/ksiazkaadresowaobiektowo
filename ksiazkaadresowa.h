#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>


#include "UzytkownikMenedzer.h"
#include "wyswietlanieMenu.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    WyswietlanieMenu wyswietlanieMenu;
    AdresatMenedzer adresatMenedzer;
public:
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wypiszWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer (nazwaPlikuZUzytkownikami) {
   uzytkownikMenedzer.wczytajUzytkownikowZPliku();
   adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    };
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int wyzerowaneID);
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

   int dodajAdresata(int idZalogowanegoUzytkownika);
   void wyswietlWszystkichAdresatow();
};

#endif

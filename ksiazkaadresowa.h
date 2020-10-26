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
    string nazwaPlikuZAdresatami;

    AdresatMenedzer *adresatMenedzer;

public:
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wypiszWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI) : uzytkownikMenedzer (nazwaPlikuZUzytkownikami) {
    nazwaPlikuZAdresatami=NAZWAPLIKUZADRESATAMI;
   //adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
   adresatMenedzer= NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer= NULL;
    }
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int wyzerowaneID);
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

   int dodajAdresata();
   void wyswietlWszystkichAdresatow();
   void wyszukajAdresatowPoImieniu();
   void wyszukajAdresatowPoNazwisku();
   void usunAdresata();
   void edytujAdresata();
};

#endif

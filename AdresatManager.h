#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include<fstream>
#include<sstream>

#include "adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    vector <Adresat> adresaci;
    int idUsunietegoAdresata;
    Adresat podajDaneNowegoAdresata();
    string wczytajLinie();
    void wyswietlDaneAdresata(Adresat adresat);



    PlikZAdresatami plikZAdresatami;


 public:



    void dodajAdresata();
    void wypiszWszystkichAdresatow();
    void wyswietlWszystkichAdresatow();
    //int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    //int wczytajAdresatowZalogowanegoUzytkownikaZPliku( int idZalogowanegoUzytkownika);
    AdresatMenedzer (int idZalogowanegoUzytkownika): ID_ZALOGOWANEGO_UZYTKOWNIKA (idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
        idUsunietegoAdresata=0;
    }

    //UzytkownikMenedzer (string nazwaPlikuZUzytkownikami):plikzUzytkownikami (nazwaPlikuZUzytkownikami) {
    //idZalogowanegoUzytkownika=0;


};
#endif

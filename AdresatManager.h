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

    vector <Adresat> adresaci;
    int idUsunietegoAdresata;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    string wczytajLinie();
    void wyswietlDaneAdresata(Adresat adresat);


    PlikZAdresatami plikZAdresatami;


 public:


    int idOstatniegoAdresata;
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wypiszWszystkichAdresatow();
    void wyswietlWszystkichAdresatow();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    //int wczytajAdresatowZalogowanegoUzytkownikaZPliku( int idZalogowanegoUzytkownika);
    AdresatMenedzer ()
    {
       idOstatniegoAdresata=0;
       idUsunietegoAdresata=0;
    }

    //UzytkownikMenedzer (string nazwaPlikuZUzytkownikami):plikzUzytkownikami (nazwaPlikuZUzytkownikami) {
    //idZalogowanegoUzytkownika=0;


};
#endif

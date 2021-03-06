#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include<fstream>
#include <cstdlib>

#include "uzytkownik.h"
#include "MetodyPomocnicze.h"
# include "PlikTekstowy.h"

using namespace std;

class PlikZUzytkownikami:public PlikTekstowy
{
    //const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI; //stala w naszym programie


    //bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:
    PlikZUzytkownikami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {}
    //PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI):NAZWA_PLIKU_Z_UZYTKOWNIKAMI(NAZWAPLIKUZUZYTKOWNIKAMI){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik>  wczytajUzytkownikowZPliku ();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};

#endif

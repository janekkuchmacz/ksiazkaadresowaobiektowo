#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include<fstream>
#include <cstdlib>

#include "uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami
{
    const string nazwaPlikuZUzytkownikami; //stala w naszym programie


    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI):nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik>  wczytajUzytkownikowZPliku ();
};

#endif

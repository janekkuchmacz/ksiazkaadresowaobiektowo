#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include<fstream>
#include <cstdlib>

#include "adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZAdresatami
{

    string nazwaPlikuZAdresatami;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

    //const string nazwaPlikuZUzytkownikami; //stala w naszym programie


    //bool czyPlikJestPusty(fstream &plikTekstowy);
    //string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    //Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:

    PlikZAdresatami()
    {
        nazwaPlikuZAdresatami = "Adresaci.txt";
    }
    void dopiszAdresataDoPliku(Adresat adresat);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);


    //PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI):nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    //void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //vector <Uzytkownik>  wczytajUzytkownikowZPliku ();
    //void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};

#endif

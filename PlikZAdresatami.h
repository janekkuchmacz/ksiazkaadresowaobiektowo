#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include<fstream>
#include <cstdlib>

#include "adresat.h"
#include "MetodyPomocnicze.h"
# include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami: public PlikTekstowy
{

    //const string nazwaPlikuZAdresatami;
    string nazwaTymczasowegoPlikuZAdresatami;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    //bool czyPlikJestPusty(fstream &plikTekstowy);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

    int idOstatniegoAdresata;
    int idPrzedOstatniegoAdresata;
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int pobierzZPlikuIdOstatniegoAdresata();
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);



    //const string nazwaPlikuZUzytkownikami; //stala w naszym programie


    //bool czyPlikJestPusty(fstream &plikTekstowy);
    //string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    //Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku)
    {
     nazwaTymczasowegoPlikuZAdresatami= "Adresaci_tymczasowo.txt";
     idPrzedOstatniegoAdresata=0;
    }
    /*PlikZAdresatami(string NAZWAPLIKUZADRESATAMI):nazwaPlikuZAdresatami (NAZWAPLIKUZADRESATAMI)
    {
        nazwaTymczasowegoPlikuZAdresatami= "Adresaci_tymczasowo.txt";

    }
    */
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void ustawIdOstatniegoAdresata (int IdOstatniegoAdresata);
    int pobierzIdOstatniegoAdresata();
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    //void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    void usunWybranegoAdresataZPliku(int idAdresata);
    void podajIUstawIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsunietegoAdresata);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void edycjaDanychWybranegoAdresata(Adresat adresat);
    void ustawIdPrzedOstatniegoAdresata();




    //PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI):nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    //void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //vector <Uzytkownik>  wczytajUzytkownikowZPliku ();
    //void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};

#endif

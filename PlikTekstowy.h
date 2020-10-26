#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <iostream>
#include <fstream>

 using namespace std;

 class PlikTekstowy
 {
     const string NAZWA_PLIKU;

 public:
    PlikTekstowy (string nazwa_pliku): NAZWA_PLIKU (nazwa_pliku) {};
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string pobierzNazwePliku()
    {
        return NAZWA_PLIKU;
    }
 };

 #endif

#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include<fstream>
#include<sstream>

#include "uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
     int idZalogowanegoUzytkownika;

        vector <Uzytkownik> uzytkownicy;
        Uzytkownik podajDaneNowegoUzytkownika ();
        int pobierzIdNowegoUzytkownika ();
        bool czyIstniejeLogin(string login);
        string wczytajLinie();

        PlikZUzytkownikami plikzUzytkownikami; //utworzenie obiektu w pliku nagłówkowym


 public:
    UzytkownikMenedzer (string nazwaPlikuZUzytkownikami):plikzUzytkownikami (nazwaPlikuZUzytkownikami) {
    idZalogowanegoUzytkownika=0;
    uzytkownicy=plikzUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int wyzerowaneID);
    bool czyUzytkownikJestZalogowany();
};
#endif

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

        PlikZUzytkownikami plikzUzytkownikami; //utworzenie obiektu w pliku nag³ówkowym


 public:
    UzytkownikMenedzer (string nazwaPlikuZUzytkownikami):plikzUzytkownikami (nazwaPlikuZUzytkownikami) {
    idZalogowanegoUzytkownika=0;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int wyzerowaneID);
};
#endif

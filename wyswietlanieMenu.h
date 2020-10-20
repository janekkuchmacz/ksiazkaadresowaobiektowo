#ifndef WYSWIETLANIEMENU_H
#define WYSWIETLANIEMENU_H
#include <iostream>

using namespace std;

class WyswietlanieMenu
{
    char wybor;
public:
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    char wczytajZnak();
};

#endif

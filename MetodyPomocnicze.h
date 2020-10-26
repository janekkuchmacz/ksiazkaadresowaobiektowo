#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include<sstream>
#include <cstdlib>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{
 public:
     static string konwerjsaIntNaString(int liczba); //metoda statyczna
     static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
     static int konwersjaStringNaInt(string liczba);
     static string pobierzLiczbe(string tekst, int pozycjaZnaku);
     static int wczytajLiczbeCalkowita();
     static char wczytajZnak();
};
#endif

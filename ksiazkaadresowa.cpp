#include "ksiazkaadresowa.h"

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
    adresatMenedzer.wypiszWszystkichAdresatow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
  uzytkownikMenedzer.rejestracjaUzytkownika();
}

 void KsiazkaAdresowa::logowanieUzytkownika()
 {
     uzytkownikMenedzer.logowanieUzytkownika();
 }
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
  {
      uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
  }
  void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika(int wyzerowaneID)
  {
      uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(wyzerowaneID);
  }
  char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
  {
      wyswietlanieMenu.wybierzOpcjeZMenuGlownego();
  }
  char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
  {
      wyswietlanieMenu.wybierzOpcjeZMenuUzytkownika();
  }

 int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika)
  {
      adresatMenedzer.dodajAdresata (idZalogowanegoUzytkownika);
  }
  void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
  {
      adresatMenedzer.wyswietlWszystkichAdresatow();
  }

#include "ksiazkaadresowa.h"

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
    adresatMenedzer->wypiszWszystkichAdresatow();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
  uzytkownikMenedzer.rejestracjaUzytkownika();
}

 void KsiazkaAdresowa::logowanieUzytkownika()
 {
     uzytkownikMenedzer.logowanieUzytkownika();
     if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()==true)
     {
         adresatMenedzer = new AdresatMenedzer (uzytkownikMenedzer. pobierzIdZalogowanegoUzytkownika(), nazwaPlikuZAdresatami);
     }
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
      delete adresatMenedzer;
      adresatMenedzer=NULL;
  }
  char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
  {
      wyswietlanieMenu.wybierzOpcjeZMenuGlownego();
  }
  char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
  {
      wyswietlanieMenu.wybierzOpcjeZMenuUzytkownika();
  }

 int KsiazkaAdresowa::dodajAdresata()
  {
      adresatMenedzer->dodajAdresata ();
  }
  void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
  {
      adresatMenedzer->wyswietlWszystkichAdresatow();
  }
  void  KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
  {
      adresatMenedzer->wyszukajAdresatowPoImieniu();
  }
  void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
  {
      adresatMenedzer->wyszukajAdresatowPoNazwisku();
  }
  void KsiazkaAdresowa::usunAdresata()
  {
     adresatMenedzer->usunAdresata();
  }
  void KsiazkaAdresowa::edytujAdresata()
  {
     adresatMenedzer->edytujAdresata();
  }

#include "UzytkownikMenedzer.h"

void UzytkownikMenedzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);

    plikzUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}
Uzytkownik UzytkownikMenedzer::podajDaneNowegoUzytkownika ()
{
    Uzytkownik uzytkownik;

    //uzytkownik.id = pobierzIdNowegoUzytkownika();
    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout <<  "Podaj login: ";
        uzytkownik.ustawLogin(wczytajLinie()); ////////
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
     uzytkownik.ustawHaslo(wczytajLinie()); ////////

    return uzytkownik;
}
int UzytkownikMenedzer::pobierzIdNowegoUzytkownika ()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}
bool UzytkownikMenedzer::czyIstniejeLogin(string login)
{
   for (int i=0; i<uzytkownicy.size(); i++)
   {
       if(uzytkownicy[i].pobierzLogin()==login)
       {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
       }
   }
   return false;
}

string UzytkownikMenedzer::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}
void UzytkownikMenedzer::wypiszWszystkichUzytkownikow()
{
   for (int i=0; i<uzytkownicy.size(); i++)
   {
       cout<<uzytkownicy[i].pobierzId()<<endl;
       cout<<uzytkownicy[i].pobierzLogin()<<endl;
       cout<<uzytkownicy[i].pobierzHaslo()<<endl;
    }
}
void UzytkownikMenedzer::wczytajUzytkownikowZPliku ()
{
   uzytkownicy = plikzUzytkownikami.wczytajUzytkownikowZPliku();
}
void  UzytkownikMenedzer::logowanieUzytkownika()
{
    Uzytkownik uzytkownik;
    string login = "", haslo = "";
    int iloscProb=3;
    cout << endl << "Podaj login: ";
    login = wczytajLinie();

    for (int i=0; i<uzytkownicy.size(); i++)
    {
      if (uzytkownicy[i].pobierzLogin() == login)
        {
            for (iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    idZalogowanegoUzytkownika = uzytkownicy[i].pobierzId();
                    break;
                }
            }
            if (iloscProb==0)
            {
                cout << "Wprowadzono 3 razy bledne haslo." << endl;
                system("pause");
            }
        }

    }
    if  (idZalogowanegoUzytkownika ==0 && iloscProb==3)
    {
        cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
        system("pause");
    }
}
void UzytkownikMenedzer::zmianaHaslaZalogowanegoUzytkownika()
{
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = wczytajLinie();

    for (int i=0; i<uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzId() == idZalogowanegoUzytkownika)
        {
            uzytkownicy[i].ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plikzUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}
int UzytkownikMenedzer::pobierzIdZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}
void UzytkownikMenedzer::ustawIdZalogowanegoUzytkownika(int wyzerowaneID)
{
     idZalogowanegoUzytkownika=wyzerowaneID;
}

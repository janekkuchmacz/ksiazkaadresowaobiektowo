#include <iostream>

#include "ksiazkaadresowa.h">

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa ("Uzytkownicy2.txt");
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();

    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    //ksiazkaAdresowa.rejestracjaUzytkownika();

    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

   // int idOstatniegoAdresata = 0;
   // int idUsunietegoAdresata = 0;
    char wybor;
    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {

           /* if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
                idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
                */

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();


            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());
                //ksiazkaAdresowa.wypiszWszystkichAdresatow();
                break;
            case '2':
                //wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                //wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                //idUsunietegoAdresata = usunAdresata(adresaci);
                //idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                //edytujAdresata(adresaci);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika(0);
                //adresaci.clear();
                break;
            }
        }
    }

    return 0;
}

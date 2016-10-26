#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void wyswietl_napis()
{
    std::cout << "Duzy czarny napis\n\n";
}

int Stworz_vektor_i_podaj_srednia(); // to jest deklaracja, definicja jest pod mainem

// ----------------------------------------------------

using namespace std;

int main(int argc, char** argv) {

	//system("chcp 1250 & cls");        // polskie znaki

	wyswietl_napis();

// ----------------------------------------------------

    int rozmiar_tablicy = 0;

    int tablica[5] = { 1, 2, 3, 4, 5 };

    int tablica1[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    cout << "Rozmiar tablicy w bajtach " << sizeof(tablica1) << endl;

    rozmiar_tablicy = sizeof(tablica1) / sizeof(int);

    cout << "Ilosc elementow w tablicy " << rozmiar_tablicy << endl;

    for ( int od_ilu_zaczoc = 0; od_ilu_zaczoc < rozmiar_tablicy; od_ilu_zaczoc++)
    {
        if ( od_ilu_zaczoc == 0 ) cout << "\nNasza tablica:\n";

        cout << tablica1[od_ilu_zaczoc] << "\t";
        cout << tablica1[ 8 - od_ilu_zaczoc] << endl;
    }

cout << "// ----------------------------------------------------\n";// srednia

    Stworz_vektor_i_podaj_srednia();


	return 0;
}

int Stworz_vektor_i_podaj_srednia()                     // dla chêtnych
{
    int size;
    bool wypelnac_recnie;
    vector <double>tab;         // tablicza do rozszerzenia

    cout << "Jak wiele elementow stworzyc?";
    cin >> size;

    tab.resize(size);

    cout << "Czy wypelniac recznie (0 lub 1)";
    cin >> wypelnac_recnie;

    if( wypelnac_recnie ) {

        cout << "Podaj pierwsza wartosc:";
        cin >> tab[0];

        for ( int i = 1; i < size; i++)
        {
            cout << "\nPodaj " << i +1 << " wartosc:";
            cin >> tab[i];
        }
    }
    else
    {
        for ( int i = 0; i < tab.size(); i++)
            tab[i] = rand() % 100 + 1 ;
    }

    // wypisz tablicê

    for( int i = 0; i < tab.size(); i++)
        cout << endl << "Index nr " << i << " wartosc " << tab.at(i) << endl;

    unsigned srednia, suma = 0;
    double srednia_z_przecinkiem = 0;

    for( int i = 0; i < tab.size(); i++)
    {
        suma = tab[i] + suma;
    }
    srednia = suma / size;
    srednia_z_przecinkiem = (double) suma / size;

    cout << endl << "Srednia (int)   : " << srednia << endl;
    cout << "Srednia (double): " << srednia_z_przecinkiem << endl;

}

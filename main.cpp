#include <iostream>
#include "prototypy.h"
#include <chrono>

using namespace std;

// tablice dla wszystkich rozmiarów zestawów danych
int tab50[50];
int tab100[100];
int tab200[200];
int tab500[500];
int tab1000[1000];
int tab2000[2000];

int rozmiar_tablicy, elementy = sizeof(tab50) / sizeof(tab50[0]);

int main() {

    // odczyt liczb do wszystkich tablic
    odczyt_z_pliku("..\\liczby2000.txt", tab50, rozmiar_tablicy, 50);
    odczyt_z_pliku("..\\liczby2000.txt", tab100, rozmiar_tablicy, 100);
    odczyt_z_pliku("..\\liczby2000.txt", tab200, rozmiar_tablicy, 200);
    odczyt_z_pliku("..\\liczby2000.txt", tab500, rozmiar_tablicy, 500);
    odczyt_z_pliku("..\\liczby2000.txt", tab1000, rozmiar_tablicy, 1000);
    odczyt_z_pliku("..\\liczby2000.txt", tab2000, rozmiar_tablicy, 2000);
    // reset czasu, bo wcześniej do pomiaru czasu dla
    // pierwszego zestawu liczb doliczało poprzednie operacje
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    auto end = chrono::high_resolution_clock::now();

    /*
     * pomiar czasu
     * ROZMIAR TABLICY
     * ZBIÓR LOSOWY -> MALEJĄCO
     * MALEJĄCO -> ROSNĄCO (PESYMISTYCZNY)
     * ROSNĄCO -> ROSNĄCO (OPTYMISTYCZNY)
     * program uruchamiam trzykrotnie dla danego sortowania
     * następnie poniżej zmieniam wywoływane funkcje dla innego sortowania
     */
    cout << "=== TABLICA 50 - ELEMENTOWA ===\n";
    pomiar_czasu_insertion_sort_pes(tab50);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab50);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab50);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 100 - ELEMENTOWA ===\n";
    elementy = sizeof(tab100) / sizeof(tab100[0]);
    pomiar_czasu_insertion_sort_pes(tab100);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab100);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab100);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 200 - ELEMENTOWA ===\n";
    elementy = sizeof(tab200) / sizeof(tab200[0]);
    pomiar_czasu_insertion_sort_pes(tab200);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab200);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab200);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 500 - ELEMENTOWA ===\n";
    elementy = sizeof(tab500) / sizeof(tab500[0]);
    pomiar_czasu_insertion_sort_pes(tab500);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab500);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab500);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 1000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab1000) / sizeof(tab1000[0]);
    pomiar_czasu_insertion_sort_pes(tab1000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab1000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab1000);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 2000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab2000) / sizeof(tab2000[0]);
    pomiar_czasu_insertion_sort_pes(tab2000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab2000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab2000);
    cout << " (charater zbioru optymistyczny)\n";




    /*
     * SORTOWANIE BĄBELKOWE
     *
         cout << "=== TABLICA 50 - ELEMENTOWA ===\n";
    pomiar_czasu_bubble_sort_pes(tab50);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_bubble_sort(tab50);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_bubble_sort(tab50);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 100 - ELEMENTOWA ===\n";
    elementy = sizeof(tab100) / sizeof(tab100[0]);
    pomiar_czasu_bubble_sort_pes(tab100);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_bubble_sort(tab100);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_bubble_sort(tab100);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 200 - ELEMENTOWA ===\n";
    elementy = sizeof(tab200) / sizeof(tab200[0]);
    pomiar_czasu_bubble_sort_pes(tab200);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_bubble_sort(tab200);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_bubble_sort(tab200);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 500 - ELEMENTOWA ===\n";
    elementy = sizeof(tab500) / sizeof(tab500[0]);
    pomiar_czasu_bubble_sort_pes(tab500);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_bubble_sort(tab500);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_bubble_sort(tab500);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 1000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab1000) / sizeof(tab1000[0]);
    pomiar_czasu_bubble_sort_pes(tab1000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_bubble_sort(tab1000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_bubble_sort(tab1000);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 2000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab2000) / sizeof(tab2000[0]);
    pomiar_czasu_bubble_sort_pes(tab2000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_bubble_sort(tab2000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_bubble_sort(tab2000);
    cout << " (charater zbioru optymistyczny)\n";


     * SORTOWANIE PRZEZ WSTAWIANIE

         cout << "=== TABLICA 50 - ELEMENTOWA ===\n";
    pomiar_czasu_insertion_sort_pes(tab50);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab50);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab50);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 100 - ELEMENTOWA ===\n";
    elementy = sizeof(tab100) / sizeof(tab100[0]);
    pomiar_czasu_insertion_sort_pes(tab100);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab100);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab100);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 200 - ELEMENTOWA ===\n";
    elementy = sizeof(tab200) / sizeof(tab200[0]);
    pomiar_czasu_insertion_sort_pes(tab200);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab200);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab200);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 500 - ELEMENTOWA ===\n";
    elementy = sizeof(tab500) / sizeof(tab500[0]);
    pomiar_czasu_insertion_sort_pes(tab500);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab500);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab500);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 1000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab1000) / sizeof(tab1000[0]);
    pomiar_czasu_insertion_sort_pes(tab1000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab1000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab1000);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 2000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab2000) / sizeof(tab2000[0]);
    pomiar_czasu_insertion_sort_pes(tab2000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_insertion_sort(tab2000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_insertion_sort(tab2000);
    cout << " (charater zbioru optymistyczny)\n";


     * SORTOWANIE PRZEZ SCALANIE

    cout << "=== TABLICA 50 - ELEMENTOWA ===\n";
    pomiar_czasu_merge_sort_pes(tab50);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_merge_sort(tab50);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_merge_sort(tab50);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 100 - ELEMENTOWA ===\n";
    elementy = sizeof(tab100) / sizeof(tab100[0]);
    pomiar_czasu_merge_sort_pes(tab100);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_merge_sort(tab100);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_merge_sort(tab100);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 200 - ELEMENTOWA ===\n";
    elementy = sizeof(tab200) / sizeof(tab200[0]);
    pomiar_czasu_merge_sort_pes(tab200);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_merge_sort(tab200);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_merge_sort(tab200);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 500 - ELEMENTOWA ===\n";
    elementy = sizeof(tab500) / sizeof(tab500[0]);
    pomiar_czasu_merge_sort_pes(tab500);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_merge_sort(tab500);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_merge_sort(tab500);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 1000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab1000) / sizeof(tab1000[0]);
    pomiar_czasu_merge_sort_pes(tab1000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_merge_sort(tab1000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_merge_sort(tab1000);
    cout << " (charater zbioru optymistyczny)\n";

    cout << "\n\n=== TABLICA 2000 - ELEMENTOWA ===\n";
    elementy = sizeof(tab2000) / sizeof(tab2000[0]);
    pomiar_czasu_merge_sort_pes(tab2000);
    cout << " (charakter zbioru losowy)\n";
    pomiar_czasu_merge_sort(tab2000);
    cout << " (charakter zbioru pesymistyczny)\n";
    pomiar_czasu_merge_sort(tab2000);
    cout << " (charater zbioru optymistyczny)\n";

 */
    return 0;
}


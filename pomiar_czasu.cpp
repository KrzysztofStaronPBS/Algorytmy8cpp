#include <iostream>
#include <chrono>
#include "prototypy.h"
using namespace std;

// z maina biorę do tego pliku zmienną elementy
// poprzez słowo kluczowe extern
extern int elementy;

/*
 * WSZYSTKIE FUNKCJE DZIAŁAJĄ TU IDENTYCZNIE,
 * RÓŻNIĄ SIĘ JEDYNIE WYWOŁYWANĄ FUNKCJĄ W TRAKCIE POMIARU CZASU
 * ORAZ KOMUNIKATEM ZWROTNYM
 */
// NA PRZYKŁADZIE PONIŻSZEJ FUNKCJI
void pomiar_czasu_bubble_sort(int tab[]){
    // początek pomiaru czasu
    auto start = chrono::high_resolution_clock::now();
    // wyłączona synchronizacja strumieni we/wy z C++ z iostream
    // ze strumieniami stdio z C
    ios_base::sync_with_stdio(false);
    // operacje wykonywane w trakcie pomiaru czasu
    sort_babelkowe(tab, elementy);
    // zakończenie pomiaru czasu
    auto end = chrono::high_resolution_clock::now();
    // zmienna ze zmierzonym czasem wykonywania sortowania, przechowana w postaci nanosekund (10^-9s)
    long long czas = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    // zamiana nanosekund na milisekundy (10^-3s)
    double time_taken = (double)czas * 10e-6;
    cout << "\nCzas sortowania tablicy sortowaniem babelkowym wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_bubble_sort_pes(int tab[]){
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_babelkowe_pes(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    long long czas = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    double time_taken = (double)czas * 10e-6;
    cout << "\nCzas sortowania tablicy sortowaniem babelkowym wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_insertion_sort(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_przez_wstawianie(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    long long czas = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    double time_taken = (double)czas * 10e-6;
    cout << "\nCzas sortowania tablicy sortowaniem przez wstawianie wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_insertion_sort_pes(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_przez_wstawianie_pes(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    long long czas = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    double time_taken = (double)czas * 10e-6;
    cout << "\nCzas sortowania tablicy sortowaniem przez wstawianie wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_merge_sort(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    mergeSort(tab, 0, elementy - 1);
    auto end = chrono::high_resolution_clock::now();
    long long czas = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    double time_taken = (double)czas * 10e-6;
    cout << "\nCzas sortowania tablicy sortowaniem przez scalanie wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_merge_sort_pes(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    mergeSort_pes(tab, 0, elementy - 1);
    auto end = chrono::high_resolution_clock::now();
    long long czas = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    double time_taken = (double)czas * 10e-6;
    cout << "\nCzas sortowania tablicy sortowaniem przez scalanie wyniosl " << time_taken << " milisekund" << endl;
}
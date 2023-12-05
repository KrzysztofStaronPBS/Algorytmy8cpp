#include <bits/stdc++.h>
#include <chrono>
#include "prototypy.h"
using namespace std;

extern int elementy;

void pomiar_czasu_bubble_sort(int tab[]){
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_babelkowe(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::microseconds >(end - start).count();
    time_taken *= 1e-3;
    cout << "\nCzas sortowania tablicy sortowaniem babelkowym wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_bubble_sort_pes(int tab[]){
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_babelkowe_pes(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::microseconds >(end - start).count();
    time_taken *= 1e-3;
    cout << "\nCzas sortowania tablicy sortowaniem babelkowym wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_insertion_sort(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_przez_wstawianie(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::microseconds >(end - start).count();
    time_taken *= 1e-3;
    cout << "\nCzas sortowania tablicy sortowaniem przez wstawianie wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_insertion_sort_pes(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_przez_wstawianie_pes(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::microseconds >(end - start).count();
    time_taken *= 1e-3;
    cout << "\nCzas sortowania tablicy sortowaniem przez wstawianie wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_merge_sort(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_babelkowe(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::microseconds >(end - start).count();
    time_taken *= 1e-3;
    cout << "\nCzas sortowania tablicy sortowaniem przez scalanie wyniosl " << time_taken << " milisekund" << endl;
}

void pomiar_czasu_merge_sort_pes(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_babelkowe(tab, elementy);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::microseconds >(end - start).count();
    time_taken *= 1e-3;
    cout << "\nCzas sortowania tablicy sortowaniem przez scalanie wyniosl " << time_taken << " milisekund" << endl;
}
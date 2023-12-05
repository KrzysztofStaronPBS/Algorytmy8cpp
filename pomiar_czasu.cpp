#include <bits/stdc++.h>
#include <chrono>
#include "prototypy.h"
using namespace std;

void pomiar_czasu_bubble_sort(int tab[]){
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_babelkowe(tab);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    time_taken *= 1e-9;
    cout << "Czas sortowania tablicy sortowaniem babelkowym wyniosl " << time_taken << " sekund" << endl;
}

void pomiar_czasu_insertion_sort(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_przez_wstawianie(tab);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    time_taken *= 1e-9;
    cout << "Czas sortowania tablicy sortowaniem przez wstawianie wyniosl " << time_taken << " sekund" << endl;
}

void pomiar_czasu_merge_sort(int tab[]) {
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    sort_babelkowe(tab);
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds >(end - start).count();
    time_taken *= 1e-9;
    cout << "Czas sortowania tablicy sortowaniem przez scalanie wyniosl " << time_taken << " sekund" << endl;
}
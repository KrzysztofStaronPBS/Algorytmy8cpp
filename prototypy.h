#pragma once
#include <iostream>
void odczyt_z_pliku(const std::string& nazwa_pliku, int tablica[], int& rozmiar, int rozmiartab);

void pomiar_czasu_bubble_sort(int tab[]);

void pomiar_czasu_bubble_sort_pes(int tab[]);

void pomiar_czasu_insertion_sort(int tab[]);

void pomiar_czasu_merge_sort(int tab[]);

void sort_babelkowe(int arr[], int elementy);

void sort_babelkowe_pes(int arr[], int elementy);

void sort_przez_wstawianie(int arr[], int elementy);

void sort_przez_wstawianie_pes(int arr[], int elementy);

void merge(int arr[], int p, int q, int r);

void mergeSort(int arr[], int l, int r);
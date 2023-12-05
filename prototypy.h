#pragma once
#include <iostream>
void odczyt_z_pliku(const std::string& nazwaPliku, int tablica[], int& rozmiar);

void pomiar_czasu_bubble_sort(int tab[]);

void pomiar_czasu_insertion_sort(int tab[]);

void pomiar_czasu_merge_sort(int tab[]);

void sort_babelkowe(int arr[]);

void sort_przez_wstawianie(int arr[]);

void merge(int arr[], int p, int q, int r);

void mergeSort(int arr[], int l, int r);

int partition(int array[], int low, int high);

void quickSort(int array[], int low, int high);

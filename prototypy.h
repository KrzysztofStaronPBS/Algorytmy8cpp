#pragma once
#include <iostream>
/**
 * Funkcja do odczytu liczb z pliku. Pobierane liczby zapisywane są w tablicy podanej jako argument funkcji.
 * @param nazwa_pliku Nazwa pliku, z którego mają być pobrane liczby.
 * @param tablica Nazwa tablicy, do której mają być zapisane liczby.
 * @param rozmiar Rozmiar tablicy; z każdą iteracją w programie rozmiar zwiększa się i nie może
 * przekroczyć rozmiartab, czyli maksymalnego rozmiaru tablicy.
 * @param rozmiartab Maksymalny rozmiar tablicy.
 */
void odczyt_z_pliku(const std::string& nazwa_pliku, int tablica[], int& rozmiar, int rozmiartab);

/**
 * Pomiar czasu dla sortowania bąbelkowego (rosnąco).
 * @param tab Tablica, która zostanie posortowana.
 */
void pomiar_czasu_bubble_sort(int tab[]);

/**
 * Pomiar czasu dla sortowania bąbelkowego (malejąco).
 * @param tab Tablica, która zostanie posortowana.
 */
void pomiar_czasu_bubble_sort_pes(int tab[]);

/**
 * Pomiar czasu dla sortowania przez wstawianie. (rosnąco).
 * @param tab Tablica, która zostanie posortowana.
 */
void pomiar_czasu_insertion_sort(int tab[]);

/**
 * Pomiar czasu dla sortowania przez wstawianie (malejąco).
 * @param tab Tablica, która zostanie posortowana.
 */
void pomiar_czasu_insertion_sort_pes(int tab[]);

/**
 * Pomiar czasu dla sortowania przez scalanie (rosnąco).
 * @param tab Tablica, która zostanie posortowana.
 */
void pomiar_czasu_merge_sort(int tab[]);

/**
 * Pomiar czasu dla sortowania przez scalanie (malejąco).
 * @param tab Tablica, która zostanie posortowana.
 */
void pomiar_czasu_merge_sort_pes(int tab[]);

/**
 * Implementacja sortowania bąbelkowego, maksymalnie zoptymalizowanego.
 * Sortuje liczby rosnąco.
 * @param arr Tablica z liczbami do posortowania.
 * @param elementy Ilość elementów w tablicy do posortowania.
 */
void sort_babelkowe(int arr[], int elementy);

/**
 * Implementacja sortowania bąbelkowego, maksymalnie zoptymalizowanego.
 * Sortuje liczby malejąco.
 * @param arr Tablica z liczbami do posortowania.
 * @param elementy Ilość elementów w tablicy do posortowania.
 */
void sort_babelkowe_pes(int arr[], int elementy);

/**
 * Implementacja sortowania przez wstawianie. Sortuje liczby rosnąco.
 * @param arr Tablica z liczbami do posortowania.
 * @param elementy Ilość elementów w tablicy do posortowania.
 */
void sort_przez_wstawianie(int arr[], int elementy);

/**
 * Implementacja sortowania przez wstawianie. Sortuje liczby malejąco.
 * @param arr Tablica z liczbami do posortowania.
 * @param elementy Ilość elementów w tablicy do posortowania.
 */
void sort_przez_wstawianie_pes(int arr[], int elementy);

/**
 * Implementacja sortowania przez scalanie. Dzieli rekurencyjnie
 * tablice i wywołując funkcję pomocniczą scala je.
 * @param arr Tablica z liczbami do posortowania.
 * @param p Pierwszy indeks pierwszej podtablicy.
 * @param q Indeks środkowy tablicy wejściowej;
 * ostatni indeks pierwszej podtablicy.
 * q to m z funkcji mergeSort.
 * q + 1 to pierwszy indeks drugiej podtablicy.
 * @param r Ostatni indeks drugiej podtablicy.
 */
void merge(int arr[], int p, int q, int r);

/**
 * Funkcja pomocnicza do sortowania przez scalanie.
 * Sortuje liczby i scala dwie tablice w jedną (porządek rosnący).
 * @param arr Tablica z liczbami do posortowania.
 * @param l Pierwszy indeks tablicy wejściowej;
 * w funkcji merge l staje się p.
 * @param r Ostatni indeks tablicy wejściowej;
 * w funkcji merge r staje się r.
 */
void mergeSort(int arr[], int l, int r);

/**
 * Implementacja sortowania przez scalanie. Dzieli rekurencyjnie
 * tablice i wywołując funkcję pomocniczą scala je.
 * @param arr Tablica z liczbami do posortowania.
 * @param p Pierwszy indeks pierwszej podtablicy.
 * @param q Indeks środkowy tablicy wejściowej;
 * ostatni indeks pierwszej podtablicy.
 * q to m z funkcji mergeSort.
 * q + 1 to pierwszy indeks drugiej podtablicy.
 * @param r Ostatni indeks drugiej podtablicy.
 */
void merge_pes(int arr[], int p, int q, int r);

/**
 * Funkcja pomocnicza do sortowania przez scalanie.
 * Sortuje liczby i scala dwie tablice w jedną (porządek malejący).
 * @param arr Tablica z liczbami do posortowania.
 * @param l Pierwszy indeks tablicy wejściowej;
 * w funkcji merge l staje się p.
 * @param r Ostatni indeks tablicy wejściowej;
 * w funkcji merge r staje się r.
 */
void mergeSort_pes(int arr[], int l, int r);
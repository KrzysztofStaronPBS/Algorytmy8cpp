#include <iostream>
#include "prototypy.h"

#define MAX_ROZMIAR 2000

int main() {
    int tabrand[MAX_ROZMIAR];
    int rozmiar_tablicy;

    odczyt_z_pliku("..\\liczby2000.txt", tabrand, rozmiar_tablicy);

    return 0;
}
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
// generator 2000 losowych liczb
void generator(){
    // inicjalizacja ziarna losowania
    srand(time(nullptr));
    int liczba;
    // nazwę pliku zapisuję jako ścieżkę bezwzględną,
    // aby mieć pewność, że program na pewno utworzy plik
    // jeśli nie istnieje i wpisze do niego liczby
    const std::string nazwa_pliku = "C:\\Users\\Administrator\\"
                        "CLionProjects\\Algorytmy8cpp\\liczby2000.txt";
    std::ofstream pliczek;
    // plik, na którym będę operować
    // otwieranie pliku w trybie zapisu
    pliczek.open(nazwa_pliku);
    // jesli nie da się otworzyć pliku, program informuje
    // o tym i kończy swoje działanie
    if (pliczek.good() == false) {
        printf("Nie udalo sie otworzyc pliku.\n");
        return;
    }
    // generowanie losowych liczb z zakresu 0 - 9999
    for(int i = 0; i < 2000; i ++){
        liczba = rand()%10000;
        // wpisanie liczby do pliku
        pliczek << liczba << std::endl;
    }
    // zamknięcie pliku
    pliczek.close();
}
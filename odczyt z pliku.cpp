#include <iostream>
#include <fstream>

// ODCZYT Z PLIKU DO TABLICY
void odczyt_z_pliku(const std::string& nazwa_pliku, int tablica[], int& rozmiar, int rozmiartab) {
    // wskaźnik do pliku
    std::ifstream pliczek(nazwa_pliku);

    // jeśli plik jest otwarty, rozmiar ustawiam na 0
    // i dopóki rozmiar jest mniejszy od rozmiaru tablicy
    // oraz liczby są zapisywane do tablicy
    if (pliczek.is_open()) {
        rozmiar = 0;
        while (rozmiar < rozmiartab && pliczek >> tablica[rozmiar]) {
            rozmiar++;
        }
        // zamknięcie pliku
        pliczek.close();
    } else {
        // gdyby nie dało się otworzyć pliku, w konsoli pojawi się komunikat
        // na czerwono (wyjście dla błędów)
        std::cerr << "Nie można otworzyć pliku " << nazwa_pliku << std::endl;
    }
}

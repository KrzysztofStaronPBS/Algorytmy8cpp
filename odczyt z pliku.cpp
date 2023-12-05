#include <iostream>
#include <fstream>

#define MAX_ROZMIAR 2000

void odczyt_z_pliku(const std::string& nazwa_pliku, int tablica[], int& rozmiar) {
    std::ifstream pliczek(nazwa_pliku);

    if (pliczek.is_open()) {
        rozmiar = 0;
        while (rozmiar < MAX_ROZMIAR && pliczek >> tablica[rozmiar]) {
            rozmiar++;
        }

        pliczek.close();
    } else {
        std::cerr << "Nie można otworzyć pliku " << nazwa_pliku << std::endl;
    }
}

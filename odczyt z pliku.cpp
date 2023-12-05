#include <iostream>
#include <fstream>

void odczyt_z_pliku(const std::string& nazwa_pliku, int tablica[], int& rozmiar, int rozmiartab) {
    std::ifstream pliczek(nazwa_pliku);

    if (pliczek.is_open()) {
        rozmiar = 0;
        while (rozmiar < rozmiartab && pliczek >> tablica[rozmiar]) {
            rozmiar++;
        }

        pliczek.close();
    } else {
        std::cerr << "Nie można otworzyć pliku " << nazwa_pliku << std::endl;
    }
}

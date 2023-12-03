#include <string>
#include <fstream>
void odczyt_z_pliku(int *arr) {
    const std::string nazwa_pliku = "..\\liczby2000.txt";
    std::ifstream pliczek;
    pliczek.open(nazwa_pliku);
    std::string linia;
    int liczba, i = 0;
    while(!pliczek.eof()) {
        getline(pliczek, linia);
        liczba = std::stoi(linia);
        arr[i] = liczba;
        i ++;
    }
    pliczek.close();
}
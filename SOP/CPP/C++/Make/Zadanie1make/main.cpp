#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    ifstream plik("Plik.txt"); // Otwarcie pliku
    plik.seekg(0, ios::end); // Przej�cie na koniec pliku

    int rozmiar;
    rozmiar = plik.tellg();  // Sprawdzamy pozycj�, kt�ra odpowiada d�ugo�ci pliku!

    cout << "Rozmiar pliku to " << rozmiar << "bajtow." << endl;
    getch();
    return 0;
}

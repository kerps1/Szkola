#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;
int main()
{
    int tab[4];
  ifstream zapis;
  zapis.open("Plik.txt");

  for (int i=0;i<4;i++){
  zapis>>tab[i];
  }
  for (int i=3;i>=0;i--){
    cout<<"Liczba nr "<<i<<" to:"<<tab[i]<<endl;
  }

  getch();
  return 0;
}

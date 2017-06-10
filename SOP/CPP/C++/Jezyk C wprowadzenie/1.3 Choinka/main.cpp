#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

int h;

cout << "Wprowadz wysokosc choinki: ";
cin >> h;
cout << endl;

for (int i = 1; i <= h-1; i++)
{
for (int k = 1 ; k <= h-i-1 ; k++)
{
cout << " ";
}
for (int j = 1; j <= 2*i-1 ; j++)
{
cout << "*";
}
cout << endl;
}

for (int pien = 1; pien <= h-2; pien++)
{
cout << " ";
}
cout << "#";

char znak;
cin >> znak;
}

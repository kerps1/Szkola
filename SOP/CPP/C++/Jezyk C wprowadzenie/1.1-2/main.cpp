#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a;
    int sum=0;
    cout << "Podaj dowolna ilosc liczb, ktora zostanie zsumowana." << endl;
    cin >>a;

    int Tab[a];

    cout<<"Podaj liczby, ktore maja byc zsumowane:" <<endl;
    for (int i=0;i<=a-1;i++)
    {
        cout<<"Liczba nr "<<i<<": ";
        cin>>Tab[i];
        sum=sum+Tab[i];
    }
    cout<<"\nSuma liczb to:"<<sum;

    getch();

    return sum;

}

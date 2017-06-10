#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int minimum(int numbers[], int elementsCount);
int maximum(int numbers[], int elementsCount);
int sum(int numbers[], int elementsCount);

typedef int (*operation)(int[], int elementsCount);

int forAll(int numbers[], int elementsCount, operation operation);

int main()
{
    int z;
    int n;
    operation operations[] = {minimum, maximum, sum};
    cout << "Podaj z (0-2): ";
    cin >> z;
    cout << endl;
    cout << "Ile liczb chcesz umiescic?: ";
    cin >> n;
    cout << endl;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbę " << (i + 1) << ": ";
        cin >> numbers[i];
        cout << endl;
    }

    int wynik = forAll(numbers, n, operations[z]);
    cout << "Twój wyniczek: " << wynik << endl;
    return 0;
}

int maximum(int numbers[], int elementsCount)
{
    int max;
    for (int i = 0; i < elementsCount; i++)
    {
        if (i == 0) {
            max = numbers[i];
        } else if (max < numbers[i]) {
            max = numbers[i];
        }
    }
    return max;
}

int minimum(int numbers[], int elementsCount)
{
    int min;
    for (int i = 0; i < elementsCount; i++)
    {
        if (i == 0) {
            min = numbers[i];
        } else if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

int sum(int numbers[], int elementsCount)
{
    int sum = 0;
    for (int i = 0; i < elementsCount; i++)
    {
        sum += numbers[i];
    }
    return sum;
}

int forAll(int numbers[], int elementsCount, operation operation)
{
    return operation(numbers, elementsCount);
}
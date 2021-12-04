#include <iostream>
#include <stdlib.h>

using namespace std;

int k, suma;
int main()
{
    cout << "Podaj k: " << endl;
    cin >> k;
    int A[50];
    A[0]=0;
    for (int i=1; i<50; i++)
    {
        A[i]=rand() % k;
    }
    cout << "Zawartosc tablicy od 0 do Twoje k to:" << endl;
    for (int i=0; i<50; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Suma wartosci z przedzialu 30-42 to: ";
    for (int i=30; i<43; i++)
    {
        suma=suma+A[i];
    }
    cout << suma;
    cout << endl;
    return 0;
}

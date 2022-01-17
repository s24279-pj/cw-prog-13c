#include <iostream>

using namespace std;

struct ulamek
{
float licznik;
float mianownik;
float wartosc;
};

float mnozenie(ulamek a, ulamek b)
{
    return a.wartosc*b.wartosc;
}

int main()
{

    ulamek pierwszy;
    pierwszy.licznik = 1;
    pierwszy.mianownik = 2;
    pierwszy.wartosc = 0.5;

    ulamek drugi;
    drugi.licznik = 1;
    drugi.mianownik = 2;
    drugi.wartosc = 0.5;

    cout << mnozenie(pierwszy,drugi);

    return 0;
}

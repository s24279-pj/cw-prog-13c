#include <iostream>

using namespace std;

void dane(int *wsk_n, int *wsk_tab)
{
    cout << "Tablica " << *wsk_tab << " ma rozmiar " << *wsk_n << endl;
}

void wypelnij(int n, int tab[])
{
    for (int i=0; i<n; i++)
    {
        tab[i]=(rand()%10)+0;
    }
}

void wyswietl(int *wsk_n, int *wsk_tab)
{
    for (int i=0; i<*wsk_n; i++)
    {
        cout << wsk_tab[i] << " ";
    }
}

int skalarny(int *wsk_n, int *wsk_X, int *wsk_Y)
{
    int wynik;
    for (int i=0; i<*wsk_n; i++)
    {
        wynik+=wsk_X[i]*wsk_Y[i];
    }
    return wynik;
}

int main()
{
    int r;
    int *wsk_r = &r;

    srand(time(0));
    int A[10];
    int B[10];

    cout << "Podaj rozmiar obu tablic: ";
    cin >> r;

    dane(wsk_r,A);
    dane(wsk_r,B);

    wypelnij(r,A);
    wypelnij(r,B);

    wyswietl(wsk_r,A);
    cout << endl;
    wyswietl(wsk_r,B);
    cout << endl;

    cout << "Iloczyn Skalarny: " << skalarny(wsk_r, A, B);

    return 0;
}

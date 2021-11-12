#include <iostream>

using namespace std;


float a,b;

int suma (int a, int b)
{
return a+b;
}

int roznica (int a, int b)
{
return a-b;
}

int razy (int a, int b)
{
return a*b;
}

float dziel (float a, float b)
{
return a/b;
}

int main()
{
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    cout << "Wynik funkcji sumy: " << suma(a,b) << endl;
    cout << "Wynik funkcji roznica: " << roznica(a,b) << endl;
    cout << "Wynik funkcji razy: " << razy(a,b) << endl;
    if (b==0)
    {
        cout << "Brak wyniku. Dzielenie przez zero" << endl;
    }
    else
    cout << "Wynik funkcji dziel: " << dziel(a,b) << endl;

    return 0;
}

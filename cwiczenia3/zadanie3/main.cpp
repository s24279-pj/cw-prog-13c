#include <iostream>

using namespace std;

float a,b;
int dzialanie;
int main()
{
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Ktore dzialanie mam wykonac na tych liczbach? Wybierz numer z listy." << endl;
    cout << "1.Dodawanie" << endl;
    cout << "2.Odejmowanie" << endl;
    cout << "3.Mnozenie" << endl;
    cout << "4.Dzielenie" << endl;
    cin >> dzialanie;

    switch(dzialanie)
    {
    case 1: cout << "Wynik dodawania Twoich liczb to: "<< a+b; break;
    case 2: cout << "Wynik odejmowania Twoich liczb to: "<< a-b; break;
    case 3: cout << "Wynik mnozenia Twoich liczb to: "<< a*b; break;
    case 4:
        {
            if (b!=0)
            {
            cout << "Wynik dzielenia Twoich liczb to: "<< a/b; break;
            }
            else;
            cout << "Nie mozna dzielic przez zero!"; break;
            }
    default : cout << "Podales liczbe spoza listy."; break;
    }

    return 0;
}

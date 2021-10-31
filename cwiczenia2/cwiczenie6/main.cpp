#include <iostream>

using namespace std;

int liczba, potega, wynik=1;
int main()
{
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Podaj jej potege: ";
    cin >> potega;

   for (int i=0; i<potega; i++)
    wynik=wynik*liczba;

    cout << "Twoja liczba " << liczba << " do potegi " << potega << " to: " << wynik << endl;

    return 0;
}

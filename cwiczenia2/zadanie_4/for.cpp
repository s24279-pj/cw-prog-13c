#include <iostream>

using namespace std;

int liczba, silnia=1;
int main()
{
    cout << "Podaj liczbe, a oblicze Ci jej silnie: ";
    cin >> liczba;

    for (int i=liczba; i>1; i--)
    silnia=silnia*i;

    cout << silnia << endl;


    return 0;
}

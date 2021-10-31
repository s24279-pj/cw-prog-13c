#include <iostream>

using namespace std;

int liczba, silnia=1;
int main()
{
    cout << "Podaj liczbe, a oblicze Ci jej silnie: ";
    cin >> liczba;

    while (liczba>0)
    silnia=liczba*liczba(-1);

    cout << silnia << endl;


    return 0;
}

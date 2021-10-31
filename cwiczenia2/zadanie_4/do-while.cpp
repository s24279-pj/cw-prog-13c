#include <iostream>

using namespace std;

int liczba, silnia=1;
int main()
{
    cout << "Podaj liczbe, a oblicze Ci jej silnie: ";
    cin >> liczba;


    do
    {
    silnia=liczba*liczba(-1);
    }while (liczba>0)


    cout << silnia << endl;


    return 0;
}

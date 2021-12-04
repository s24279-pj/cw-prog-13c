#include <iostream>
#include <vector>

using namespace std;
//wersja z tablica wektorowa. Jednak wtedy pytanie o 20 lub 5 zmiennych nie ma sensu, poniewaz tablica jest dynamiczna i sie dostosuje.

/*
int ilosc,zmienna;
int main()
{
    vector <int> A(10,0);
    cout << "Podaj ilosc zmiennych" << endl;
    cin >> ilosc;
    A.clear();
    for (int i=0; i<ilosc; i++)
    {
        cout << "Podaj zmienna " << i+1 << ": " << endl;
        cin >> zmienna;
        A.push_back(zmienna);
    }

    for (int i=0; i<A.size(); i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
*/

// wersja z normalna tablica.
//Podajac 20 zmiennych, tablica sie rozszerzy do 20 miejsc.
//Podajac 5 zmiennych, zmienne zajmą 5 miejsc, a reszta pozostanie zapelniona zerami

int ilosc,zmienna;
int tablica[10]= {0};
int main()
{

    cout << "Podaj ilosc zmiennych: ";
    cin >> ilosc;
    for (int i=0; i<ilosc; i++)
    {
        cout << "Podaj zmienna " <<i+1<< ": ";
        cin >> zmienna;
        tablica[i]=zmienna;

    }

   for (int i=0; i<20; i++)
    {
        cout << tablica[i] << endl;
    }

return 0;
}

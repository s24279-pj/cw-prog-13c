#include <iostream>
#include <vector>

using namespace std;

// jesli uzytkownik poda <10 zmiennych, "nadprogramowe" zera wykasują się. jeśli uzytkownik poda >10 zmiennych, to wyskoczy błąd

int main()
{
    int n;
    int A[10];
    for (int i=0; i<10; i++)
    {
        A[i]=0;
    }

    cout << "Tablica wypełniona zerami:" << endl;
    for (int i=0; i<10; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Podaj ilosc zmiennych: ";
    cin >> n;
    cout << "A teraz podaj zmienne:"<< endl;
    for (int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    cout << "Twoje zmienne:" << endl;
    for (int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }

return 0;
}

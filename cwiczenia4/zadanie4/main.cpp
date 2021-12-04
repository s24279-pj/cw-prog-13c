#include <iostream>
#include <vector>

using namespace std;

int rozmiar, start, x;
int main()

{

    cout << " Podaj rozmiar tablicy: ";
    cin >> rozmiar;
    cout << " Podaj wartosc startowa: ";
    cin >> start;
    vector <int> A(rozmiar);
    A[0]=start;
    for (int i=1; i<rozmiar; i++)
    {
        A[i]=start+i;
    }

    for (int i=0; i<rozmiar; i++)
    {
    cout << A[i];
    }
    return 0;
}

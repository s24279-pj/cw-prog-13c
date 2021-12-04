#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int x;
int main()
{
    vector <int> A;
    cout << "Podaj liczbe (wpisz 0, by wyswietlic wszystkie wpisane liczby): " << endl;
    do
        {
        cin >> x;
        A.push_back(x);
        }while(x!=0);

    for (int i=0; i<=A.size(); i++)
    {
        for (int i=0; i<5; i++)
        {
        cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

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
        if (x==0)
        break;
        else
        A.push_back(x);
        }while(x!=0);

    for (int i=0; i<=A.size(); i++)
    {
       if (i%5 == 0)
        {
            cout << endl;
        }
            cout << A[i] << " ";
    }
    return 0;
}

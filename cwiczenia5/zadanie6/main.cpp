#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>

using namespace std;


void full(int n, int tab[])
{


     for (int i=0; i<n; i++)
        {
            tab[i]=(std::rand()%10+0);
        }

}
void show(int &n, int tab[])
{
    for (int i=0; i<n; i++)
    {
        std::cout << tab[i];
    }
}

int skalarny(int n, int X[], int Y[])
{
    int iloczyn=0;
    for (int i=0; i<n; i++)
    {
        iloczyn+=X[i]*Y[i];
    }
    std::cout << iloczyn;
}

int main()
{
    srand((unsigned)time(0));
    int q,p;
    int A[15];
    int B[15];
    cout << "Podaj wymiar tablicy A, maksymalnie o rozmiarze 15" << endl;
    cin >> q;
    cout << "Podaj wymiar tablicy B, maksymalnie o rozmiarze 15" << endl;
    cin >> p;
    full(q,A);
    full(p,B);

    std::cout << "Twoja tablica A:" << endl;
    show(q,A);
    std::cout << endl;
    std::cout << "Twoja tablica B:" << endl;
    show(q,B);
    std::cout << endl;
    std::cout << "A iloczyn skalarny to: ";
    skalarny(q,A,B);

    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

void look(int n, int tab[10][10])
{
    int mx = 0;
    // szukanie max wartosci
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(tab[i][j] > mx)
                mx = tab[i][j];
        }
    }
    //podanie wspolrzednych maksymalnej wartosci
    cout << "Maksymalna wartosc w tablicy to: " << mx << endl;
    cout << "Polozenie maksymalnych wartosci to {w,k}: " << endl;

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(tab[i][j] == mx)
             cout << "{" << i+1 << "," << j+1 << "}" << endl;
        }
    }
}
//funkcja sumy przekatnych wartosci macierzy
int przekatna(int n, int tab[10][10])
{
    int suma=0;
    for (int i=0; i<10;i++)
    {
        for (int j=0; j<10; j++)
        if (i==j)
        {
            suma+=tab[i][j];
        }
    }
    cout << "Suma przekatnej to: " << suma << endl;
}

void trans(int k, int p, int tab[10][10])
{
    //zamiana
    for (int i=0; i<10; i++)
    {
       std::swap(tab[k-1][i],tab[p-1][i]);
    }
    //wyswietlenie po zamianie
    std::cout << "Twoja tablica po zamianie.." << endl;
        for (int i=0; i<10; i++)
    {

        for (int j=0; j<10; j++)
            {
                std::cout << tab[i][j] << " ";
            }
            std::cout << endl;
    }
}

int main()
{
    //wypełnienie tablicy losowymi cyframi [0-9]
    srand(time(NULL));
    int n,m,k,p;
    int tab[10][10];
    std::cout << "Podaj ilosc wierszy: " << endl;
    std::cin >> n;
    std::cout << "Podaj ilosc kolumn: " << endl;
    std::cin >> m;
    std::cout << "Twoja tablica:" << endl;
    for (int i=0; i<n; i++)
    {

        for (int j=0; j<m; j++)
            {
                tab[i][j]=rand()%10+0;
                std::cout << tab[i][j] << " ";
            }
            std::cout << endl;
    }
    std::cout << endl;
    look(n,tab);
    przekatna(n,tab);
    std::cout << endl;
    std::cout << "A teraz zamiana wierszy. \nPodaj nr wiersza: ";
    std::cin >> k;
    std::cout << "Podaj nr wiersza z ktorym ma nastapic zamiana: ";
    std::cin >> p;
    std::cout << endl;
    trans(k,p,tab);


    return 0;
}

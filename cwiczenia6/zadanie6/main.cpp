#include <iostream>

using namespace std;

int odwracanie(int tab[], int n)
{
    int i;
    for (int i=0; i<n; i++)
    {
    swap(tab[i],tab[n-1]);
    n--;
    }
    return
}

int main()
{
    int n;
    int tab[10] = {1,2,3,4,5,6,7,5,4,3};
    cout << "Twoja tablica" << endl;
    for (int i=0; i<10; i++)
    {
        cout << tab[i] << " ";
    }
    cout << "Podaj ile pierwszych elementow odwrocic:";
    cin >> n;
    odwracanie(tab,n);
    cout << "Twoja tablica po funkcji odwracanie" << endl;
    for (int i=0; i<10; i++)
    {
        cout << tab[i] << " ";
    }
    odwracanie(odwracanie(tab,n),n);
    cout << "Twoja tablica po odwracanie(odwracanie" << endl;
    for (int i=0; i<10; i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}

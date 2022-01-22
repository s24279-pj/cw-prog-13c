#include <iostream>

using namespace std;

int* odwracanie(int tab[], int n)
{
    for (int i=0; i<n; i++)
    {
    swap(tab[i],tab[n-1]);
    n--;
    }
    return tab;
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
    cout << "\nPodaj ile pierwszych elementow odwrocic:";
    cin >> n;
    odwracanie(tab,n);
    cout << "Twoja tablica po funkcji odwracanie" << endl;
    for (int i=0; i<10; i++)
    {
        cout << tab[i] << " ";
    }
    odwracanie(odwracanie(tab,n),n);
    cout << "\nTwoja tablica po odwracanie(odwracanie,n)" << endl;
    for (int i=0; i<10; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}

#include <iostream>

using namespace std;

void quick_sort (int *tablica, int lewa, int prawa)
{
int l=lewa;
int p=prawa;
int x=tablica[(l+p)/2];

    do
    {
    while(tablica[l]<x) l++;
    while(tablica[p]>x) p--;
    if (l<=p)
        {
        swap(tablica[l], tablica[p]);
        l++; p--;
        }
    }while(l<=p);
if (p>lewa) quick_sort(tablica,lewa,p);
if (l<prawa) quick_sort(tablica, l, prawa);


}

int main()
{

    int tablica[64];
    for (int i=0; i<64; i++)
        {
            tablica[i]=rand()%100;
        }

    quick_sort(tablica, 0, 63);


    for (int i=0; i<64; i++)
    {
    cout << tablica[i] << " ";
    }
    return 0;
}

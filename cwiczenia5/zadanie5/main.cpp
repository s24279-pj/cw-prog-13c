#include <iostream>

using namespace std;


int sil_rek(int n)
{
    if (n>1)
    {
    return n*(sil_rek(n-1));
    }
    else
    return 1;
}


int main()
{
    int n;
    cout << "Podaj silnie jaka mam obliczyc: ";
    cin >> n;
    cout << n << "! to: " << sil_rek(n);

    return 0;
}

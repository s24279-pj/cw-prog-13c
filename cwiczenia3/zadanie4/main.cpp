#include <iostream>

using namespace std;


int a,b;

int funkcja1 (int a)
{
return a*2;
}

int funkcja2 (int b)
{
return b+100;
}

int main()
{

    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;

    cout << "Wynik funkcji 1: " << funkcja1(a) << endl;
    cout << "Wynik funkcji 2: " << funkcja2(b) << endl;

    return 0;
}

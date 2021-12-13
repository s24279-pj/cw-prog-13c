#include <iostream>

using namespace std;

int iloczyn(int a, int b)
{
    return a*b;
}
int a,b;
int main()
{
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << iloczyn(a,b);
    return 0;
}

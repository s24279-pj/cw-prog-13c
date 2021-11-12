#include <iostream>

using namespace std;

int a,b,c;
int max2 (int a, int b)
    {
        if (a>b)
            return a;
        else
            return b;
     }
int max3 (int a, int b, int c)
    {
        if ((max2(a,b))>c)
            return max2(a,b);
        else
            return c;
    }
int main()
{
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    cout << "Podaj c: " << endl;
    cin >> c;
    cout << "Wieksza jest: " << max3(a,b,c);
    return 0;
}

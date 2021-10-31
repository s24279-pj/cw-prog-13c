#include <iostream>

using namespace std;

int x,y;
int main()
{
    cout << "Zagrajmy w gre. Podaj liczbe:" << endl;
do
{
    cin >> x;
    if (x==y)
    {
    break;
    }
    else
    cout << x << endl;
    cin >> y;
    if (y==x)
    {
    break;
    }
    else
    cout << y << endl;
}while(y!=x);

cout << "Przegrales!";

    return 0;
}

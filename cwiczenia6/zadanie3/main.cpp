#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 1;
    int y = 0;

    int *wsk_x = &x;
    int *wsk_y = &y;

    cout << "Przed zamiana: x = " << x << ", y = " << y << endl;
    swap(wsk_x,wsk_y);
    cout << "Po zamianie:   x = " << x << ", y = " << y << endl << endl;
    return 0;
}

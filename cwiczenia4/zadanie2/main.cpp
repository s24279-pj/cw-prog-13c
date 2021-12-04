#include <iostream>
#include <array>

using namespace std;

int znak = 33;
int main()
{
    int ASCII[93];
    for (int i=0; i<94; i++)
    {
       ASCII[i]=znak++;
    }

    for (int i=0; i<94; i++)
    {
        cout << char(i) << endl;
    }


    return 0;
}

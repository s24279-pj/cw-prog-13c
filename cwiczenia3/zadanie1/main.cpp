#include <iostream>

using namespace std;

int main()
{
    for (int i=0; i<256; i++)
    {
    char a=i;
    cout << i << " = " << a << "  ";

    if(i%10==0)
    cout << endl;
    }
    return 0;
}

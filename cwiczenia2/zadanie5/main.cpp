#include <iostream>

using namespace std;

int width, height;
int main()
{
    cout << "Podaj szerokosc: ";
    cin >> width;
    cout << "Podaj wysokosc: ";
    cin >> height;

   for (int i=0; i<height; i++)
   {
        for (int i=0; i<width; i++)
        {
            cout << "#";
        }
    cout << "\n";
    }

    return 0;
}

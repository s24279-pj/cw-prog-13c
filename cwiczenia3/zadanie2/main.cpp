#include <iostream>

using namespace std;

int ocena;
int main()
{
    cout << "Podaj ocene uzywajac cyfry: ";
    cin >> ocena;

    switch(ocena)
    {
        case 1: cout << "Niedostateczny." ; break;
        case 2: cout << "Dopuszczajacy." ; break;
        case 3: cout << "Dostateczny." ; break;
        case 4: cout << "Dobry." ; break;
        case 5: cout << "Bardzo dobry." ; break;
        case 6: cout << "Celujacy." ; break;

        default: cout << "W Polsce nie ma takich ocen." << endl;
    }
    return 0;
}

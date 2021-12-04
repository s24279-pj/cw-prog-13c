#include <iostream>
#include <unistd.h>



using namespace std;


char IN[] = {'J','A','K','U','B',' ','W','I','E','C','E','K'};
int zakres = 'Z'-'A'+1;
int key = key%zakres;
int main()
{
    cout << "Moje imie i nazwisko" << endl;
    cout << IN << endl;
    cout << endl;
    cout << "Zakoduj kodem Cezara. Podaj klucz i nacisnij Enter" << endl;
    cin >> key;
    getchar();
    for (int i=0; i<2;i++)
    {
     cout << "." << endl;
     sleep(1);
    }
    for (int i=0; i<13; i++)
    {
    if (i=5)
        cout <<IN[i];
    else
       IN[i]+=key;
        if ((unsigned char) IN[i] > 'Z') IN[i] -= zakres;
        if ((unsigned char) IN[i] < 'A') IN[i] += zakres;
        cout << IN[i];
    }

    return 0;
}

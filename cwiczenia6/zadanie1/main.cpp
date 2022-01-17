#include <iostream>

using namespace std;

int main()
{

    string imie = "Jakub Wiecek";
    string *w = &imie;

    cout << "Wartosc zmiennej: " << imie << endl;
    cout << "Adres zmiennej: " << &imie << endl;
    cout << "Rozmiar zmiennej: " << sizeof(imie) << endl << endl;

    cout << "Wartosc Wskaznika: " << *w << endl;
    cout << "Adres wskaznika: " << &w<< endl;
    cout << "Rozmiar wskaznika: " << sizeof(w)<< endl;

    return 0;
}

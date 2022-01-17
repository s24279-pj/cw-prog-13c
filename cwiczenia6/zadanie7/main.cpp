#include <iostream>

using namespace std;

struct trojkat
{
float a;
float b;
float c;
};

float obwod(trojkat t)
{
    float a,b,c;
    return t.a+t.b+t.c;
}


int main()
{
    trojkat t;
    std::cout << "Podaj a: ";
    std::cin >> t.a;
    std::cout << "Podaj b: ";
    std::cin >> t.b;
    std::cout << "Podaj a: ";
    std::cin >> t.c;
    std::cout << "Obwod trojkata: " << obwod(t) << "\n";

    trojkat f;
    std::cout << "Podaj a: ";
    std::cin >> f.a;
    std::cout << "Podaj b: ";
    std::cin >> f.b;
    std::cout << "Podaj a: ";
    std::cin >> f.c;
    std::cout << "Obwod trojkata: " << obwod(f) << "\n";


    return 0;
}

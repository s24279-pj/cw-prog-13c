#include <iostream>
#include <math.h>

using namespace std;

float cone(float r, float h)
{
    float field=(M_PI)*r*r;
    float volume=((field)*h)/3;
    if (r>0 && h>0)
    {
    std::cout << "Pole stozka wynosi: " << field << endl;
    std::cout << "Objetosc stozka to: " << volume;
    }
    else if (r>0 && h==0)
    {
    std::cout << "Pole stozka wynosi: " << field << endl;
    std::cout << "Twoj stozek jest kolem.";
    }else
    std::cout << "Taki stozek nie istnieje";
    return false;

}


int main()
{
    float r, h;
    std::cout << "Podaj promien stozka: ";
    std::cin >> r;
    std::cout << "Podaj wysokosc stozka: ";
    std::cin >> h;
    std::cout << endl;
    cout.precision(4);
    std::cout << cone(r,h);
    std::cout << endl;

    return 0;
}

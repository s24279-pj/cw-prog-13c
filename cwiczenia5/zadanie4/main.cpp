#include <iostream>
#include <math.h>

using namespace std;

void cone(float r, float h, float &field, float &volume)
{
    field=(M_PI)*r*r;
    volume=((M_PI)*r*r*h)/3;
}

int main()
{
    float r, h, field, volume;
    cout.precision(4);
    std::cout << "Podaj promien stozka: ";
    std::cin >> r;
    std::cout << "Podaj wysokosc stozka: ";
    std::cin >> h;
    cone(r,h,field,volume);
    if (r>0 && h>0)
    {
    std::cout << "Pole stozka wynosi: " << field << endl;
    std::cout << "Objetosc stozka to: " << volume;
    }else if (r>0 && h==0)
    {
    std::cout << "Pole stozka wynosi: " << field << endl;
    std::cout << "Twoj stozek jest kolem.";
    }else
    std::cout << "Taki stozek nie istnieje";
    std::cout << endl;

    return 0;
}

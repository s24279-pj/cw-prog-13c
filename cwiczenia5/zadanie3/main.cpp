#include <iostream>
#include <cmath>

using namespace std;


bool triangle(float a, float b, float c, float &pole)
{
    float p;
    p=(a+b+c)/2;
    pole=sqrt(p*(p-a)*(p-b)*(p-c));

    if ((a+b>c) && (a+c>b) && (b+c>a) && a>0 && b>0 &&c>0)
    {
    return pole;

    }else cout << "Taki trojkat nie istnieje";
    // w przypadku błędnego trójkąta, nie wiem skąd bierze mi się dopisek "0" albo "-nan" po tym cout.

    return false;

}

int main()
{
    float a,b,c,pole,p;
    cin >> a;
    cin >> b;
    cin >> c;
    triangle(a,b,c,pole);
    cout << pole;
return 0;
}

#include <iostream>

using namespace std;

void fake(int a, int b)
{
    int w;
    w=a;
    a=b;
    b=w;
    cout <<"Fake"<< endl;
    cout << "x: " << a << " y: "<< b << endl;
    cout << endl;

}
void refer(int &a, int &b)
{
    int w;
    w=a;
    a=b;
    b=w;
    cout <<"Refer"<< endl;
    cout << "x: " << a << " y: "<< b << endl;
    cout << endl;
}

int main()
{
    int a=1, b=2;
    cout <<"Main"<< endl;
    cout << "x: " << a << " y: "<< b << endl;
    cout << endl;
    fake(a,b);
    cout <<"Main"<< endl;
    cout << "x: " << a << " y: "<< b << endl;

    refer(a,b);
    cout <<"Main"<< endl;
    cout << "x: " << a << " y: "<< b << endl;


    return 0;
}

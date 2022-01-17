#include <iostream>

using namespace std;

void print(string *w)
{

    cout << w << "  =  "<< *w << endl;

}
int main()
{
    string napis = "Hello";
    string *a=&napis;
    print(a);

    return 0;
}

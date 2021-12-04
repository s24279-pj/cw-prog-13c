#include <iostream>
#include <vector>

using namespace std;


int zmienna;
int main()
{

    cout << "Podaj zmienne (aby zakonczyc wpisywanie, wpisz jakakolwiek litere):"<< endl;
    vector <int> B;
   while(cin.good())
   {
        cin >> zmienna;
        B.push_back(zmienna);
    }
    B.pop_back();

    cout << "Twoje zmienne posortowane rosnaco: " << endl;
    for (int i=0; i<B.size(); i++)
    {
        for (int i=0; i<B.size()-1; i++)
            {
                if (B[i]>B[i+1])
                {
                swap(B[i],B[i+1]);
                }
            }
    }
    for (int i=0; i<B.size(); i++)
    {
    cout <<B[i] <<endl;
    }

    return 0;
}

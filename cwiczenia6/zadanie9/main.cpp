#include <iostream>
#include <vector>

using namespace std;

struct student
{
string imie;
string nazwisko;
vector <int> oceny;
};

float average_of(student X)
{
    X.oceny;
    int suma = 0;
    for (int i=0; i<X.oceny.size(); i++)
    {
        suma+=X.oceny[i];
    }
    return suma/X.oceny.size();
}

void get_best_student(vector <float> &student)
{
    for (int i=0; i<student.size(); i++)
    {
        student.push_back(average_of(X));
    }

// tej czescie nie wiem jak zrobic
}

int main()
{
    vector <float> &student(A,B,C,D);
    student A;
    A.imie = "Jan";
    A.nazwisko = "Kowalski";
    A.oceny = {1,2,3,4,5};

    student B;
    B.imie = "Pawel";
    B.nazwisko = "Piotrkowski";
    B.oceny = {5,2,3,3,3};

    student C;
    B.imie = "Piotr";
    B.nazwisko = "Graczyk";
    B.oceny = {1,5,5,4,3};

    student D;
    B.imie = "Adam";
    B.nazwisko = "Modry";
    B.oceny = {1,2,2,1,4};

    cout << get_best_student(student);
    return 0;
}

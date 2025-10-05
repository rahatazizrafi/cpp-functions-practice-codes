#include<iostream>
using namespace std;

void display(int c, double d)
{
    cout << "Integer is C and Double is D" << endl;
}

void display(double c, int d)
{
    cout << "Double is C and Integer is D.";
}

int main()
{
    display(12, 26.12);
    display(12.26, 26);
    return 0;
}


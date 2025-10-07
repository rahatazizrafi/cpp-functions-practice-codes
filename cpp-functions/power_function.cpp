#include<iostream>
#include<cmath>
using namespace std;

int exponent(int base, int exp)
{
    return pow(base, exp);
}

double exponent(double base, double exp)
{
    return pow(base, exp);
}

int main()
{
    cout << "Integer exponent result: " << pow(2, 3) << endl;
    cout << "Double exponent result: " << pow(2.3, 1.2) << endl;
    return 0;
}

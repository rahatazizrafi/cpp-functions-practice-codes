#include<iostream>
#include<cmath>
using namespace std;

double power(double base, double exp = 2)
{
    return pow(base, exp);
}

int main()
{
    cout << "Result = " << power(12) << endl;
    cout << "Result = " << power(12, 26) << endl;
    return 0;
}


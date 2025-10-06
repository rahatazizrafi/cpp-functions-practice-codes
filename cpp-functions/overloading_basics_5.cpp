#include<iostream>
using namespace std;

int result(int p, int r)
{
    return p * r;
}

float result(float p, float r)
{
    return p * r;
}

double result(double p, double r)
{
    return p * r;
}

int main()
{
    cout << result(12, 26) << endl;
    cout << result(12.5, 26.5) << endl;
    cout << result(12.345345, 26.4344554452);
    return 0;
}

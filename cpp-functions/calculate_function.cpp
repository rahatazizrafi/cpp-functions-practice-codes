#include<iostream>
using namespace std;

int sum(int p, int r)
{
    return p + r;
}

float mul(float p, float r)
{
    return p * r;
}

int avg(int p, int r, int l)
{
    return (p + r + l) / 3;
}

int main()
{
    cout << "Sum of numbers: " << sum(12, 26) << endl;
    cout << "Multiplication of numbers: " << mul(1.2, 2.6) << endl;
    cout << "Average of numbers: " << avg(12, 26, 16);
    return 0;
}

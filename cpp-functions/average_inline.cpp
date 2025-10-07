#include<iostream>
using namespace std;

inline int sum(int p, int r, int l)
{
    return p + r + l;
}

int mul(int p, int r, int l)
{
    return p * r * l;
}

inline float avg(float p, float r, float l)
{
    return (p + r + l) / 3;
}

int main()
{
    cout << "Sum = " << sum(12, 26, 16) << endl;
    cout << "Multiplication = " << mul(12, 26, 16) << endl;
    cout << "Average = " << avg(12, 26, 16);

    return 0;
}

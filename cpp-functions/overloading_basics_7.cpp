#include<iostream>
#include<cmath>
using namespace std;

int square(int x)
{
    return pow(x, 2);
}

float square(float x)
{
    return pow(x,2);
}

int main()
{
    int m = 12;
    float n = 2.6;

    cout << "Square of " << m << " is = " << square(m) << endl;
    cout << "Square of " << n << " is = " << square(n) << endl;

    return 0;
}

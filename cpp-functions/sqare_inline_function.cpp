#include<iostream>
#include<cmath>
using namespace std;

inline int square(int p)       // inline function declaration //
{
    return pow(p, 2);
}

int main()
{
    cout << "Square of 5 = " << square(5);
    return 0;
}

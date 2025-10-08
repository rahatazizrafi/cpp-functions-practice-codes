#include<iostream>
using namespace std;

inline float interest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    cout << "Interest = " << interest(2000, 6, 3);
    return 0;
}

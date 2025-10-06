#include<iostream>
#include<cmath>
#define pi 3.1416
using namespace std;

int volume(int a)                            // volume of a cube //
{
    return pow(a, 3);
}

float volume(float r, float h)               // volume of a cylinder //
{
    return pi * pow(r, 2) * h;
}

float volume(float r1)                       // volume of a sphere //
{
    return (4 * pi * pow(r1, 3) / 3);
}

int main()
{
    int a = 6;
    float r = 2.5, h = 4.5, r1 = 9.5;

    cout << "The volume of a cube with side " << a << " is = " << volume(a) << endl;
    cout << "The volume of a cylinder with radius " << r << " & height " << h << " is = " << volume(r, h) << endl;
    cout << "The volume of a sphere with radius " << r << " is = " << volume(r1) << endl;

    return 0;
}

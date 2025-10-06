#include<iostream>
#include<cmath>
#define pi 3.1416
using namespace std;

float area(float r)
{
    return pi * pow(r, 2);
}

float area(int b, int h)
{
    return(b * h) / 2;
}

float area(float l, float w)
{
    return l * w;
}

int main()
{
    float r = 3.5, l = 2.5, w = 4.5;
    int b = 12, h = 26;
    cout << "The area of the circle of radius " << r << " is = " << area(r) << endl;
    cout << "The area of the rectangle of length " << l << " & width " << w << " is = " << area(l, w) << endl;
    cout << "The area of the triangle of base " << b << " & height " << h << " is = " << area(b,h) << endl;
    return 0;
}

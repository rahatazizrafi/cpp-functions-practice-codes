#include<iostream>
#include<cmath>
#define pi 3.1416
using namespace std;

double areaTriangle(float length = 12.26, float base = 26.12)
{
    return (length * base) / 2;
}

double areaCircle(float radius = 1.226)
{
    return pi * pow(radius, 2);
}

int main()
{
    cout << "Area of Triangle with default values = " << areaTriangle() << endl;
    cout << "Area of Triangle without default values = " <<areaTriangle(12.12, 26.26) << endl;
    cout << "Area of Triangle with one default value = " << areaTriangle(12.26) << endl;
    cout << "Area of Circle with default value = " << areaCircle() << endl;
    cout << "Area of Circle without default value = " << areaCircle(12.26) << endl;
    return 0;
}

#include<iostream>
#include<cmath>
#include<conio.h>
#define pi 3.1416
using namespace std;

inline float arCircle(float r) {
return pi * pow(r, 2);
}

inline float arTriangle(float b, float h) {
return (b * h) / 2;
}

inline float arRect(float b, float h) {
return b * h;
}

inline float borderCircle(float r) {
return 2 * pi * r;
}

inline float borderTriangle(float b, float h) {
return (2 * h) + b;
}

inline float borderRect(float b, float h) {
return 2 * (b + h);
}

int main() {
cout << "Area of Circle = " << arCircle(2.12) << endl;
cout << "Area of Triangle = " << arTriangle(12.26, 26.12) << endl;
cout << "Area or Rectangle = " << arRect(26,12) << endl << endl;
cout << "Border of Circle = " << borderCircle(5.12) << endl;
cout << "Border of Triangle = " << borderTriangle(26, 12) << endl;
cout << "Border of Rectangle = " << borderRect(12, 26) << endl << endl;
cout << "Thank you for using inline functions!";

getch();
}

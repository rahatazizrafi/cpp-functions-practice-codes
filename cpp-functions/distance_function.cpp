#include<iostream>
#include<cmath>
using namespace std;

// 2D //
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// 3D //
       double distance(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

int main()
{
    cout << "2D Distance: " << distance(2, 3, 5, 6) << endl;
    cout << "3D Distance: " << distance(12, 26, 12.12, 26.26, 12.26, 26.12) << endl;

    return 0;
}

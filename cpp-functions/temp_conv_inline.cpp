#include<iostream>
using namespace std;

inline float celToFah(float c)
{
    return (( 9.0 / 5) * c) + 32;
}

inline float fahToCel(float f)
{
    return (( 5.0 / 9) * f) - 32;
}

int main()
{
    cout << "Fahrenheit Temp = " << celToFah(38.29) << char(248) << "F" << endl;
    cout << "Celsius Temp = " << fahToCel(100.23) << char(248) << "C" << endl;
    return 0;
}

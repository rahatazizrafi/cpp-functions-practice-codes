#include<iostream>
using namespace std;

double converter(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

double converter(double fahrenheit, bool isFahrenheit)
{
    return (fahrenheit -32) * 5 / 9;
}

int main()
{
    double celsius = 26, fahrenheit = 78.8;
    cout << celsius << " degree Celsius = " << converter(celsius) << " degree Fahrenheit." << endl;
    cout << fahrenheit << " degree Fahrenheit = " << converter(fahrenheit, true) << " degree Celsius." << endl;

    return 0;
}

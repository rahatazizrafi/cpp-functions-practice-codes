#include<iostream>
using namespace std;

int add(int m, int n, int o)
{
    return m + n + o;
}

double add(double m, double n, double o)
{
    return m + n + o;
}

int main()
{
    int result1 = add(12, 26, 16);
    cout << result1 << endl;
    double result2 = add(12.2666, 26.1666, 16.1226);
    cout << result2;
    return 0;
}

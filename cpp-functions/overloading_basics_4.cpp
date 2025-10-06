#include<iostream>
using namespace std;

int add(int d, int e = 12)
{
    return d + e;
}

double add(double d, double e)
{
    return d + e;
}

int main()
{
    cout << add(26) << endl;
    cout << add(16, 22) << endl;
    cout << add(16.122222, 22.26122612) << endl;
    return 0;
}

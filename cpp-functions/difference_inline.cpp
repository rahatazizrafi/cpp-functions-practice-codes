#include<iostream>
using namespace std;

bool int diff(int a, int b)
{
    return (a > b) ? (a - b) : (b - a);
}

int main()
{
    cout << "Difference = " << diff(12, 26);
    return 0;
}

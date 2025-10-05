#include<iostream>
#include<cmath>
using namespace std;

void cube(int p)
{
    cout << "The cube of " << p << " is: " << pow(p,3);
}

int main()
{
    cube(12);
    return 0;
}

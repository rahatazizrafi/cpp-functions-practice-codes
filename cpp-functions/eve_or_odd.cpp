#include<iostream>
using namespace std;

void evaluate(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is an even number.";
    }
    else
    {
        cout << n << " is an odd number.";
    }
}

int main()
{
    evaluate(26);
    return 0;
}

#include<iostream>
using namespace std;

void maxNumber(int m, int n)
{
    if (m > n)
    {
        cout << m << " is the maximum number." << endl;
    }
    else
    {
        cout << n << " is the maximum number." << endl;
    }
}

void maxNumber (int m, int n, int l)
{
    if (m > n && m > l)
    {
        cout << m <<" is the maximum number." << endl;
    }
    else if (n > m && n > l)
    {
        cout << n << " is the maximum number." << endl;
    }
    else
    {
        cout << l << " is the maximum number." << endl;
    }
}

int main()
{
    maxNumber(12, 26);
    maxNumber(12, 26, 106);
    return 0;
}

#include<iostream>
using namespace std;

int add(int p, int q)
{
    return p + q;
}

int add (int p, int q, int r)
{
    return p + q + r;
}

int main()
{
    cout << add(12, 26) << endl;
    cout << add (12, 26, 16);
    return 0;
}

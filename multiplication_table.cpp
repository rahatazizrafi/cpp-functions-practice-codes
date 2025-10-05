#include<iostream>
using namespace std;

void table(int p)
{
    for (int i = 1; i < 10; i++)
    {
        cout << p << "*" << i << " =" << p * i << endl;
    }
    for (int i = 10; i <= 20; i++)
    {
        cout << p << "*" << i << "=" << p * i << endl;
    }
}

int main()
{
    table(12);
    return 0;
}

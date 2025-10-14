#include<iostream>
using namespace std;

void printMultiple(int p = 26)
{
    for (int r = 1; r <= 20; r++)
    {
        cout << p * r << " ";
    }
}

int main()
{
    printMultiple(12);
    cout << endl;
    printMultiple();
    return 0;
}

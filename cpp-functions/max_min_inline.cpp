#include<iostream>
using namespace std;

inline int maxNum(int p, int r)
{
    return (p > r) ? p : r;
}

inline int minNum(int p, int r)
{
    return (p < r) ? p : r;
}

int main()
{
    cout << "Maximum Number = " << maxNum(12, 26) << endl;
    cout << "Minimum Number = " << minNum(12, 26) << endl;
    return 0;
}

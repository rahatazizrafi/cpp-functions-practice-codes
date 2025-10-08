#include<iostream>
using namespace std;

inline int timeConv(int h, int m, int s)
{
    return 3600 * h + 60 * m + s;
}

int main()
{
    cout << "Converted to seconds: " << timeConv(2, 12, 26) << " seconds." << endl;
    return 0;
}

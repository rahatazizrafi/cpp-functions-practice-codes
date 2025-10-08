#include<iostream>
using namespace std;

int inline findMax(int p, int r, int l)
{
    return (p > r && p > l) ? p : (r > l ? r : l);
}

int inline findMin(int p, int r, int l)
{
    return (p < r && p < l) ? p : (l < r ? l : r);
}

int main()
{
    cout << "Maximum = " << findMax(12, 26, 62) << endl;
    cout << "Minimum = " << findMin(12, 26, 62) << endl;
    return 0;
}

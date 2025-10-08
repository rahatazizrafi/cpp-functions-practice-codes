#include<iostream>
using namespace std;

inline bool isEven(int p)
{
    return (p % 2 == 0);
}

inline bool isOdd(int p)
{
    return (p % 2 != 0);
}

inline string signCheck(int p)
{
    return (p >= 0) ? "Positive" : "Negative";
}

int main()
{
    cout << (isEven(7) ? "Even" : "Odd") << endl;
    cout << (isOdd(8) ? "Even" : "Odd") << endl;
    cout << signCheck(-26) << endl;
    cout << signCheck(12) << endl;
    return 0;
}

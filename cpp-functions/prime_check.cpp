#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;  // less or equal one, not prime //
    if (n ==2) return true;    // 2, prime //
    if(n > 2 && n % 2 == 0) return false;  // even, not prime //

    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0) return true;
        else return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        if(isPrime(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

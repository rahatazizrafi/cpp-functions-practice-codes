#include<iostream>
#include<cmath>
using namespace std;

double discountCalc(double price, double discount = 26)
{
    return price - (price * discount / 100);
}

int main()
{
    cout << "Price after discount = " << discountCalc(1200) << endl;
    cout << "Price after discount = " << discountCalc(1200, 12) << endl;
    return 0;
}


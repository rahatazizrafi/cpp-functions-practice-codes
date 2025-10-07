#include<iostream>
using namespace std;

void printvalue(int n)
{
    cout << "Integer Value: " << n << endl;
}

void printValue(float n)
{
    cout << "Float Value: " << n << endl;
}

void prinTvalue(char n)
{
    cout << "Character Value: " << n << endl;
}

void prinTValue(string n)
{
    cout << "String Value: " << n << endl;
}
int main()
{
    printvalue(12);
    printValue(2.6);
    prinTvalue('P');
    prinTValue("Hello C++!");
    return 0;
}

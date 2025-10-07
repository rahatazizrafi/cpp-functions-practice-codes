#include<iostream>
using namespace std;

void show(string name)
{
    cout << "Name: " << name << endl;
}

void show(string name, int age)
{
    cout << "Name: " << name << " " << "& Age: " << age;
}

int main()
{
    show("John");
    show("John", 28);
    return 0;
}

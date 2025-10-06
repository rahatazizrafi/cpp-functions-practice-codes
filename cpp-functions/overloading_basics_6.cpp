#include<iostream>
using namespace std;

void display (string name)
{
    cout << "The name of the guy is " << name << "." << endl;
}

void display (string name, int age)
{
    cout << "The name of the guy is " << name << " & he is " << age << " years old." << endl;
}

int main()
{
    display ("Roman");
    display("Roman", 45);


    return 0;
}

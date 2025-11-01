#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int number[n];
    for(int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    int maximum = number[0];
    int minimum = number[0];
    for (int i = 1; i < n; i++)
    {
        if (number[i] > maximum)
            maximum = number[i];
        if (number[i] < minimum)
            minimum = number[i];

    }
    cout << "Maximum number = " << maximum << endl;
    cout << "Minimum number = " << minimum << endl;
    return 0;
}

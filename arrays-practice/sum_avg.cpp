#include<iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    float num[n];

    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    float sum = 0;
    float avg;

    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }

    cout << "Sum = " << sum << endl;

    avg = (float)sum / n;

    cout << "Average = " << avg << endl;
    return 0;
}

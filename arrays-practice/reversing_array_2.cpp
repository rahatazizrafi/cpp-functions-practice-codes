#include<iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)                // input
    {
        cin >> arr[i];
    }

    cout << "Original array elements: ";
    for(int i = 0; i < n; i++)                 // print original
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reversed array elements: ";
    for (int i = 0; i < n; i++)                // print reversed
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i -1] = temp;
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

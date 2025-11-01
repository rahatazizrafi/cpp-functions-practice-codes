#include<iostream>

using namespace std;
int main() {
int n;
cout << "Enter array size: ";
cin >> n;

int arr[n];
cout << "Enter array elements: ";
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}

cout << "Original array elements: ";
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

cout << "Smaller to larger: ";
for(int i = 0; i <n; i++) {

}
return 0;
}

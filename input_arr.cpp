#include<iostream>
using namespace std;
int main(){
    int arr[5];
    // Asking for each number separately
    cout << "Enter the first number: ";
    cin >> arr[0];

    cout << "Enter the second number: ";
    cin >> arr[1];

    cout << "Enter the third number: ";
    cin >> arr[2];

    cout << "Enter the fourth number: ";
    cin >> arr[3];

    cout << "Enter the fifth number: ";
    cin >> arr[4];

    // Printing the first, third, and fifth numbers
    cout << "Output: " << arr[0] << " " << arr[2] << " " << arr[4] << endl;

    return 0;   
}

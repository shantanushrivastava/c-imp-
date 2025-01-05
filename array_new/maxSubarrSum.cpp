#include <iostream>
#include<climits>
using namespace std;

void maxSubarrSum(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++) { // Outer loop
        for (int end = start; end < n; end++) { // Middle loop
        int currSum = 0;
            for (int i = start; i <= end; i++) { // Inner loop
                currSum += arr[i];
            }
            cout << currSum<< ",";
            maxSum = max(maxSum,currSum);
        }
        cout << endl;
    }
    cout<<"max"<<maxSum;
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = 6;
    maxSubarrSum(arr, n);
    return 0;
}

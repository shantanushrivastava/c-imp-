#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(const vector<int>& arr, int n, int target) {
    if (n == 0) {
        return -1;
    }

    int index = lastOccurrence(arr, n - 1, target);
    
    if (index != -1) {
        return index;
    }

    if (arr[n - 1] == target) {
        return n - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 4, 5, 3, 7, 3};
    int target = 4;
    
    int result = lastOccurrence(arr, arr.size(), target);
    
    if (result != -1) {
        cout << "Last occurrence of " << target << " is at index: " << result << endl;
    } else {
        cout << target << " not found in the array" << endl;
    }

    return 0;
}
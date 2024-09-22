#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei){
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while(i <= mid && j <= ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= ei){
        temp.push_back(arr[j++]);
    }

    // Corrected for loop
    int x = 0;
    for(int idx = si; idx <= ei; idx++){
        arr[idx] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei){
    if(si >= ei){
        return;
    }
    int mid = (si + ei) / 2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;  // Corrected size of the array to 6

    mergeSort(arr, 0, n - 1);
    print(arr, n);  // Added print function to show the sorted array
    return 0;
}

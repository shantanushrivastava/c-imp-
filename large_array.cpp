#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,12,8,7,-2};
    int largest = arr[0];
    int n =sizeof(arr) / sizeof(int);
    for(int i =0; i<n; i++){
        if(arr[i]>largest)
        largest = arr[i];
    }
    cout << "largest element "<<largest;
    return 0;
}
#include<iostream>
using namespace std;//in this code we  got optimal space complexity , no extra space

void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,2,7,6};
    int n = sizeof(arr)/sizeof(int);
    int start=0,end=n-1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArr(arr,n);
    return 0;
}
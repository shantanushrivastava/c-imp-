#include<iostream>
using namespace std;
void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}    
    void selectionSort(int arr[],int n ){
        for(int i = 0;i<n-1;i++){
            int minIdx=i;
            for (int j=i+1;j<n;j++){
                if (arr[j]<arr[minIdx]){
                    minIdx=j;
                }
            }
            swap(arr[minIdx],arr[i]);
        }
    }
    int main(){
        int arr[]={64,25,12,22,11};
        int n = sizeof(arr)/sizeof(n);
        selectionSort(arr,n);
        print(arr,n);
    }
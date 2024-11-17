#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for (int i = 0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,5,3,7,4,6,3,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,5)<<endl;
    return 0;
}
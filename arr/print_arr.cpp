#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,1,2,5};
    int n = sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
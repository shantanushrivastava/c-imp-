#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the length of array : ";
    cin >>n;
    int arr[n];
    for (i=0;i<n;i++){
        cout<<"enter element : ";
        cin>>arr[i];
    }
    for ( int i = 0 ; i<n ; i++){
            cout<<arr[i]<<endl;
        }
    return 0;
}
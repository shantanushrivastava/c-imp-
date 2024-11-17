#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,6,3,4};
    int n = sizeof(arr)/sizeof(int);
    int min = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"minimum= "<<min<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int arr[]={5,4,6,12,9};
    int n= sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max= " <<max<<endl;
    return 0;
}
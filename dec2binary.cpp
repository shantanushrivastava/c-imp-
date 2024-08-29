#include<iostream>
using namespace std;
int  main(){
    int product =1;
    int num;
    cout<<"enter your number";
    cin>>num;
    int sum = 0;
    while(num>0){
        int digit =num%2;
        sum = sum + (digit*product);
        num = num/2;
        product = product*10;
    }
    cout<<sum;
}
#include<bits/stdc++.h>
using namespace std;
void add(int n){//pass by value
    cout<<n<<endl;
    n+=5;
     cout<<n<<endl;
    n+=5;
     cout<<n<<endl;
}
int main(){
    int n=10;
    add(n);//&nhi use kiya isliye int me kuchh change nhi hua and 10 print
    cout<<n<<endl;
    return 0;
}
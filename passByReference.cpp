#include<bits/stdc++.h>
using namespace std;
void add(int &n){//pass by reference
    cout<<n<<endl;
    n+=5;
     cout<<n<<endl;
    n+=5;
     cout<<n<<endl;
}
int main(){
    int n=10;
    add(n);//& use kiya isliye int functionn me change hua and 20 print
    cout<<n<<endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

void printSubset(string str, string subset){
    if(str.size()==0){
        cout<<subset<< endl;
        return;
    }
    char ch = str[0];
    //yes
    printSubset(str.substr(1,str.size()-1),subset+ch);
    //no
    printSubset(str.substr(1,str.size()-1),subset);  
}
int main(){
    string str="abc";
    string subset="";
    
    printSubset(str,subset);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"capacity = "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity= "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity= "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity= "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;
    cout<<"element in second index = "<<v.at(2)<<endl;
    cout<<"front = "<<v.front()<<endl;
    cout<<"back = "<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    } 
    cout<<endl;
    v.pop_back();
    cout<<"after pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"before clear size = "<<v.size();
    v.clear();
    cout<<"after clear  size= "<<v.size()<<endl;

    //NEW CODE
    vector<int>shruti(5,1);
    cout<<"print shruti "<<endl;
    for(int i:shruti){
        cout<<i<<" ";
    }
    vector<int>shantanu(shruti);
    cout<<"print shruti "<<endl;
    for(int i:shantanu){
        cout<<i<<" ";
    }
}
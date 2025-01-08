#include<iostream>
using namespace std;

int main() {

    cout<< (17>>1) <<endl;//left shift
    cout<< (17>>2) <<endl;//left shift
    cout<< (19<<1) <<endl;//right shift
    cout<< (21<<2) <<endl;//right shift

    int i = 7;
    
    cout<< (++i) <<endl;
    // 8
    cout<< (i++) <<endl;
    // 8 , i = 9
    cout<< (i--) <<endl;
    //9 , i= 8
    cout<< (--i) <<endl;
    // 7, i =7
}
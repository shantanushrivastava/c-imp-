#include <iostream>
#include <set>
using namespace std;

int main() {
    // Set declare kiya
    set<int> s;
    
    // Values insert kar rahe hain
    s.insert(5);
    s.insert(5);  // duplicate value hai, ignore ho jayegi
    s.insert(1);
    s.insert(6);
    s.insert(0);
    
    // Set ke saare elements print karne ke liye
    cout << "Set me ye elements hain: ";
    for(auto i : s) {
        cout << i << " ";
    }
    cout << endl;
    
    // First element delete karne ke liye
    s.erase(s.begin());
    
    cout << "First element delete karne ke baad: ";
    for(auto i : s) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
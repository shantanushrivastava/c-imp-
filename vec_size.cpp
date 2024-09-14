#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4};
    cout << "size=" << vec.size() << endl;
    cout << "capacity=" << vec.capacity() << endl;

    cout << "vec: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    vec.push_back(5);
    cout << "size=" << vec.size() << endl;
    cout << "capacity=" << vec.capacity() << endl;

    cout << "vec: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    vec.pop_back();
    cout << "size=" << vec.size() << endl;
    cout << "capacity=" << vec.capacity() << endl;

    cout << "vec: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

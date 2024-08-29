#include<iostream>
#include <string>
using namespace std;

string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        // Flip each bit
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }
    return binary;
}

int main() {
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    string result = onesComplement(binary);
    cout << "One's complement: " << result << endl;

    return 0;
}
1
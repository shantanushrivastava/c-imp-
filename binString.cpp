#include<iostream>
#include<string>
using namespace std;

void binstring(int n, int lastPlace, string ans) {
    if (n == 0) {
        cout << ans << endl;
        return;  // Add return to prevent further execution after base case
    }

    if (lastPlace != 1) {
        binstring(n - 1, 0, ans + '0');
        binstring(n - 1, 1, ans + '1');
    } else {
        binstring(n - 1, 0, ans + '0');
    }
}

int main() {
    string ans = "";
    binstring(3, 0, ans);
    return 0;
}
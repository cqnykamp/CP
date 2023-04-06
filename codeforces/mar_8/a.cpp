#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t-- > 0) {
        char c;
        cin >> c;
        string n = "codeforces";
        if(n.find(c) != string::npos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
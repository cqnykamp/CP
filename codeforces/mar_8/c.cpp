#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t-- > 0) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        while(s.size() >= 2) {
            char a = s[0];
            char b = s[s.size() - 1];

            if((a == '0' && b=='1') || (a=='1' && b=='0')) {
                s = s.substr(1, s.size() - 2);
            } else {
                break;
            }
        }

        cout << s.size() << "\n";
    }
}
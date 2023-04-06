#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {

        string s;
        cin >> s;

        char prev = s[0];
        bool valid = false;
        if(prev == 'Y' || prev=='e' || prev=='s') {
            valid = true;
        }

        for(int i=1; i<s.size() && valid; i++) {
            if((prev == 'Y' && s[i]=='e') || (prev=='e' && s[i]=='s') || (prev=='s' && s[i]=='Y')) {
                prev = s[i];
            } else {
                valid = false;
            }
        }

        if(valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

}
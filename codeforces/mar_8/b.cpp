#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t-- > 0) {
        
        int l;
        cin >> l;

        string m;
        cin >> m;

        int x = 0;
        int y = 0;

        bool p = false;

        for(char a: m) {
            if(a == 'L') {
                x -= 1;
            } else if(a == 'U') {
                y += 1;
            } else if(a == 'R') {
                x += 1;
            } else {
                y -= 1;
            }

            if(x == 1 && y==1) {
                p = true;
                break;
            }
        }
        if(p) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
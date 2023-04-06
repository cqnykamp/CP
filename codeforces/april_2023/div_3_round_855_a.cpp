#include<bits/stdc++.h>
using namespace std;

void run() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i=0;
    bool m  = false; bool e = false; bool o  = false; bool w = false;
    while(s[i] == 'M' || s[i] == 'm') {
        i++;
        m = true;
    }
    while(s[i] == 'E' || s[i] == 'e') {
        i++;
        e = true;
    }
    while(s[i] == 'O' || s[i] == 'o') {
        i++;
        o = true;
    }
    while(s[i] == 'W' || s[i] == 'w') {
        i++;
        w = true;
    }

    if(m && e && o && w && i==n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
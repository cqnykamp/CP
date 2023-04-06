#include <bits/stdc++.h>
using namespace std;


void run() {

    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;

    for(int i=0; i<n; i++) {
        int q;
        cin >> q;
        a.push_back(q);
    }
    for(int i=0; i<n; i++) {
        int q;
        cin >> q;
        b.push_back(q);
    }

    for(int i=0; i<n; i++) {
        int ai = a[i];
        int bi = b[i];
        if((ai <= a.back() && bi <= b.back()) || (ai <= b.back() && bi <= a.back())) {

        } else {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
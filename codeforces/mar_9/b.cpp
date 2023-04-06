#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m,s;
    cin >> m >> s;

    set<int> b;
    for(int i=0; i<m; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }

    if(b.size() < m) {
        cout << "NO\n";
        return;
    }

    int sum =0;
    int i=1;
    auto it = b.begin();

    while(it != b.end()) {
        while(i < *it) {
            sum += i;
            i++;
        }
        i++;
        it++;
    }

    s -= sum;
    int largest = *b.rbegin() + 1;
    while(s >= 0) {
        if(s == 0) {
            cout << "YES\n";
            return;
        }
        s -= largest;
        largest++;
    }
    cout << "NO\n";
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

}
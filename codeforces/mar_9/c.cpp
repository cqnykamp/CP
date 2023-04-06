#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l,r,x,a,b;
    cin >> l >> r >> x >> a >> b;

    if(a > b) {
        swap(a, b);
    }

    if(a < l || b > r) {
        cout << -1 << "\n";
        return;
    }
    if(a==b) {
        cout << 0 << "\n";
        return;
    }
    int y = a - l;
    int z = b - a;
    int w = r - b;
    if(z >= x) {
        cout << 1 << "\n";
        return;
    }
    if(y >= x || w >= x) {
        cout << 2 << "\n";
        return;
    }
    if(z+w >= x && y+z >= x) {
        cout << 3 << "\n";
        return;
    }

    cout << -1 << "\n";
    return;

}


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

}
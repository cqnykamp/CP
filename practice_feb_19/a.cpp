#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void solve() {
    string n;
    cin >> n;

    string pi = "314159265358979323846264338327";
    for(int i=0; i<min(n.size(), pi.size()); i++) {
        if(n[i] != pi[i]) {
            cout << i << "\n";
            return;
        }
    }
    cout << min(n.size(), pi.size()) << "\n";

}


void main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
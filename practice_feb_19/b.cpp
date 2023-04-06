#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n, s, r;
    cin >> n >> s >> r;

    int d = s - r;

    vector<int> dice(n -1, s - r);

    int diff = (n-1) * (s-r) - r;
    for(auto & elem : dice) {
        if(diff > 0) {
            int subt = min(diff, elem - 1);
            elem -= subt;
            diff -= subt;
        }
        cout << elem << " ";
    }
    
    cout << d << "\n";
}


void main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
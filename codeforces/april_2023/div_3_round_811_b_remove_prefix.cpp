#include<bits/stdc++.h>
using namespace std;

void run() {
    int n;
    cin >> n;
    vector<int> a (n,0);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    set<int> found;
    for(int i=n-1; i>=0; i--) {
        if(found.count(a[i]) == 1) {
            cout << i+1 << "\n";
            return;
        }
        found.insert(a[i]);
    }
    cout << 0 << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
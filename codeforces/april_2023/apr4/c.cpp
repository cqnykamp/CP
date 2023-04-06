#include <bits/stdc++.h>
using namespace std;


void run() {

    int n;
    cin >> n;
    vector<int> b (n, 0);
    for(int i=0; i<n-1; i++) {
        cin >> b[i];
    }

    vector<int> a (n, 0);
    a[0] = b[0];

    for(int i=0; i<n-1; i++) {
        if(b[i] > a[i]) {
            a[i+1] = b[i];
        } else {
            a[i+1] = min(a[i], b[i+1]);
        }
    }

    for(int ae : a) {
        cout << ae << " ";
    }
    cout << "\n";

}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
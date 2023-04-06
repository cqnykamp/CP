#include <bits/stdc++.h>
using namespace std;


void run() {

    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    int r1, r2;
    if((x1 + y1 - 1) <= n) {
        r1 = min(x1, y1);
    } else if ((x1 + y1 - 1) > n) {
        r1 = n - max(x1, y1) + 1;
    }

    if((x2 + y2 - 1) <= n) {
        r2 = min(x2, y2);
    } else if ((x2 + y2 - 1) > n) {
        r2 = n - max(x2, y2) + 1;
    }

    cout << abs(r2 - r1) << "\n";
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
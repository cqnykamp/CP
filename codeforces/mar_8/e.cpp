#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t-- > 0) {

        int n;
        cin >> n;

        long long sum = 0;
        int smallest_mag = INT_MAX;
        bool even_negs = true;

        for(int i=0; i < n; i++) {
            int x;
            cin >> x;
            sum += abs(x);
            if(x < 0) {
                even_negs = !even_negs;
            }
            smallest_mag = min(smallest_mag, abs(x));
        }

        if(!even_negs) {
            sum -= 2 * smallest_mag;
        }

        cout << sum << "\n";

    }
}
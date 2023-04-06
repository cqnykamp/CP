#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        int q;
        cin >> n >> q;

        vector<int> v (n, 0);
        set<int> active;

        for(int i=0; i <n; i++) {
            cin >> v[i];
            active.insert(i);
        }

        for(int i=0; i<q; i++) {
            int instruct;
            cin >> instruct;

            if(instruct == 1) {
                int l, r;
                cin >> l >> r;

                l--;
                r--;

                int begin = l;
                while(!active.empty()) {
                    auto it = active.lower_bound(begin);
                    if(it == active.end() || *it > r) {
                        break;
                    }
                    string digits = to_string(v[*it]);
                    int sum = 0;
                    for(auto d: digits) {
                        sum += int(d - '0');
                    }
                    v[*it] = sum;
                    begin = *it + 1;
                    if(sum <= 9) {
                        active.erase(*it);
                    }
                }

            } else {
                int x;
                cin >> x;
                cout << v[x-1] << "\n";
            }
        }

    }
}
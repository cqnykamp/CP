#include<bits/stdc++.h>
using namespace std;

void run() {
    int n;
    cin >> n;

    vector<int> cards (n, 0);
    for(int i=0; i<n; i++) {
        cin >> cards[i];
    }

    multiset<int> powers;
    long long ans = 0;
    for(int i=0; i<n; i++) {
        if(cards[i] == 0 && !powers.empty()) {
            auto it = prev(powers.end());
            ans += *it;
            powers.erase(it);
        }
        if(cards[i] != 0) {
            powers.insert(cards[i]);
        }

    }
    cout << ans << "\n";

}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);

	int n;
	cin >> n;

    vector<long long> s (n+1, 0);

    int sum = 0;
    for(int i=1; i<n+1; i++) {
        int c;
        cin >> c;
        sum = (sum + c) % 7;
        s[i] = sum;
    }

    int ans = 0;
    vector<int> x (7, 0);

    for(int i=1; i<n+1; i++) {
        int last_ind = x[s[i]];
        if(last_ind == 0 && s[i] != 0) {
            x[s[i]] = i;
        } else if(i - last_ind > ans) {
            ans = i - last_ind;
        }
    }

    cout << ans << "\n";
}

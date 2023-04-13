#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);

	int n, k;
	cin >> n >> k;

    vector<int> d (n+1, 0);
    for(int i=0; i<k; i++) {
        int a,b;
        cin >> a >> b;
        d[a] += 1;
        if(b < n+1) {
            d[b+1] -= 1;
        }
    }

    vector<int> v (n+1, 0);
    for(int i=1; i<n+1; i++) {
        v[i] = v[i-1] + d[i];
    }

    sort(++v.begin(), v.end());

    cout << v[ (n+1) / 2] << "\n";
}

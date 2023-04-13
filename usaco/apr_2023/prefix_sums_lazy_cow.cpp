#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("lazy.in", "r", stdin);
    // freopen("lazy.out", "w", stdout);

	int n, k;
	cin >> n >> k;

    vector<vector<long long>> s (n+1, vector<long long> (n+1, 0));

    for(int i=1; i<n+1; i++) {
        for(int j=1; j<n+1; j++) {
            int c;
            cin >> c;
            s[i][j] = s[i][j-1] + c;
        }
    }

    long long ans = 0;
    for(int i=1; i<n+1; i++) {
        for(int j=1; j<n+1; j++) {

            long long sum = 0;
            for(int a=0; a<=k; a++) {
                int x = i-k+a;
                int right = j+a;
                int left = j-a-1;
                if(x >= 0) {
                    sum += s[x][min(right, n)] - s[x][max(left, 0)];
                }
            }
            for(int a=0; a < k; a++) {
                int x= i+k-a;
                int right = j+a;
                int left = j-a-1;
                if(x <= n) {
                    sum += s[x][min(right, n)] - s[x][max(left, 0)];
                }
            }
            ans = max(ans, sum);
        }
    }

    cout << ans << "\n";
}

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t-- > 0) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> v (n, 0);

        set<char> found;
        found.insert(s[0]);

        for(int i=1; i<n; i++) {
            v[i] += found.size();
            found.insert(s[i]);
        }

        found.clear();

        for(int i= n-1; i > 0; i--) {
            found.insert(s[i]);
            v[i] += found.size();
        }

        int m = *max_element(v.begin(), v.end());

        cout << m << "\n";

    }
}
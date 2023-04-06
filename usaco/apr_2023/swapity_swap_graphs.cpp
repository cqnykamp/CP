#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("template.in", "r", stdin);
    // freopen("template.out", "w", stdout);

    int n, k, a1, a2, b1, b2;
    cin >> n >> k >> a1 >> a2 >> b1 >> b2;

    a1--; a2--; b1--; b2--;

    vector<int> d (n, 0);
    for(int i=0; i<n; i++) {
        d[i] = i;
    }

    int x1=a1;
    int x2=a2;

    while(x2 >= x1) {
        int temp = d[x1];
        d[x1] = d[x2];
        d[x2] = temp;
        x1++;
        x2--;
    }
    x1=b1;
    x2=b2;
    while(x2 >= x1) {
        int temp = d[x1];
        d[x1] = d[x2];
        d[x2] = temp;
        x1++;
        x2--;
    }

    for(int i=0; i<n; i++) {
        int f = i;
        for(int j=0; j<k; j++) {
            f = d[f];
        }
        cout << f+1 << "\n";
    }

}
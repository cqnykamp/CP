#include <bits/stdc++.h>
using namespace std;


void run() {

    int m;
    cin >> m;

    map<int,int> d;

    for(int i=1; i<=m; i++) {
        int ni;
        cin >> ni;
        
        for(int j=1; j<=ni; j++) {
            int a;
            cin >> a;
            d[a] = i;
        }
    }

    vector<int> w (m, 0);
    int found = 0;
    for(const auto& p : d) {
        int k = p.first;
        int v = p.second;
        if(w[v-1] == 0) {
            found++;
            w[v-1] = k;
        }

        if(found == m) {
            for(int e : w) {
                cout << e << " ";
            }
            cout << "\n";
            return;
        }
    }
    cout << "-1\n";

}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
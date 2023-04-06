#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, c;
        cin >> n >> c;

        multiset<int> s;

        // int i=0;
        // for(i=0; i*i <= c && i <n; i++) {
        for(int i=0; i <n; i++) {
            int a;
            cin >> a;
            s.insert(a + i + 1);
        }

        // for(i=i; i<n; i++) {
        //     int x;
        //     cin >> x;
        // }

        int sum=0;
        int count=0;
        auto it = s.begin();
        while(sum <= c && it != s.end()) {
            count++;
            sum += *it;
            it++;
        }
        if(sum > c) {
            count--;
        }

        cout << count << "\n";

    }

}
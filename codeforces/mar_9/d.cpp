#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    int n2 = n;
    int twos = 0;
    while(n2 % 2 == 0) {
        n2 /= 2;
        twos++;
    }
    int fives = 0;
    while(n2 % 5 == 0) {
        n2 /= 5;
        fives ++;
    }

    int m2 = m;
    int k = 1;
    if(twos < fives) {
        while(m2 % 2 == 0 && twos < fives && k*2 <= m) {
            k *= 2;
            m2 /= 2;
            twos++;
        }
    } else if(twos > fives) {
        while(m2 % 5 == 0 && twos > fives && k*5 <= m) {
            k *= 5;
            m2 /= 5;
            fives++;
        }
    }

    while(m2 % 10 == 0 && k <= m) {
        k *= 10;
        m2 /= 10;
    }
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

}
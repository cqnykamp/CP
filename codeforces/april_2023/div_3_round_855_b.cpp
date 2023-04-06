#include<bits/stdc++.h>
using namespace std;

void run() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int sum = 0;
    map<char, int> x;
    for(auto c : s) {
        auto key = tolower(c);
        if(x.count(key) == 0) {
            x[key] = 0;
        }
        if(key == c) {
            if(x[key] < 0) {
                sum++;
            }
            x[key] += 1;
        } else {
            if(x[key] > 0) {
                sum++;
            }
            x[key] -= 1;
        }
    }

    for(auto entry : x) {
        int diff = abs(entry.second);
        while(k > 0 && diff >= 2) {
            sum++;
            diff -= 2;
            k--;
        }
    }
    cout << sum << "\n";
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
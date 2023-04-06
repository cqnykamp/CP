#include <bits/stdc++.h>
using namespace std;


void run() {

    int n;
    string d;
    string num;

    cin >> n;
    cin >> d;
    cin >> num;

    for(int i=0; i<n; i++) {
        if(int(num[i]) < int(d[0])) {
            num.insert(i, d);
            break;
        }
    }

    if(num.size() == n) {
        num += d;
    }


    cout << num << "\n";
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
#include<bits/stdc++.h>
using namespace std;

void run() {
    int s;
    cin >> s;

    int ans = 0;

    for(int i=0; i<9; i++) {
        if(s < (9-i+1)) {
            ans += pow(10, i) * s;
            break;
        } else {
            ans += pow(10, i) * (9-i);
            s -= 9-i;
        }
    }
    cout << ans << "\n";

}




int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
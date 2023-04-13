#include<bits/stdc++.h>
using namespace std;

void run() {

    int a,b;
    cin >> a >> b;
    if(a > 1 && b > 1) {
        cout << 2 << "\n";
        cout << a-1 << " " << 1 << "\n";
        cout << a << " " << b << "\n";
    } else if(a == 0 && b==0) {
        cout << 1 << "\n";
        cout << a << " " << b << "\n";
    } else if(a <= 1) {
        cout << 2 << "\n";
        cout << 1 << " " << b-1 << "\n";
        cout << a << " " << b << "\n";
    } else if(b <= 1) {
        cout << 2 << "\n";
        cout << a-1 << " " << 1 << "\n";
        cout << a << " " << b << "\n";
    }
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
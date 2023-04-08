#include<bits/stdc++.h>
using namespace std;

void run() {
    int n;
    cin >> n;
    vector<vector<int>> s (n, vector<int> (n-1, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            cin >> s[i][j];
        }
    }

    int a = s[0][0];
    int b = s[1][0];

    int y;
    int xval;
    if(a==b) {
        xval = a;
        for(int j=2; j<n; j++) {
            if(s[j][0] != a) {
                y=j;
                break;
            }
        }
    } else {
        if(s[2][0] == b) {
            xval = b;
            y = 0;
        } else {
            xval = a;
            y = 1;
        }
    }

    cout << xval << " ";
    for(int i=0; i<n-1; i++) {
        cout << s[y][i] << " ";
    }
    cout << "\n";
    
}



int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
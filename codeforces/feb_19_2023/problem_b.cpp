
#include <iostream>
using namespace std;

void main() {

    int t;
    cin >> t;

    for(t; t>0; t--) {
        int m[4];
        cin >> m[0];
        cin >> m[1];
        cin >> m[3];
        cin >> m[2];

        int d[4];
        d[0] = m[1] - m[0];
        d[1] = m[2] - m[1];
        d[2] = m[3] - m[2];
        d[3] = m[0] - m[3];

        if(d[0] > 0 && d[1] > 0 && d[2] < 0 && d[3] < 0) {            
            cout << "YES\n";
        } else if(d[1] > 0 && d[2] > 0 && d[3] < 0 && d[0] < 0) {
            cout << "YES\n";
        } else if(d[2] > 0 && d[3] > 0 && d[0] < 0 && d[1] < 0) {
            cout << "YES\n";
        } else if(d[3] > 0 && d[0] > 0 && d[1] < 0 && d[2] < 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

   }
}

#include <iostream>
#include <string>
using namespace std;

void main() {

    int t;
    cin >> t;

    for(t; t>0; t--) {
        string expr;
        cin >> expr;
        int delim = expr.find("+");
        string a = expr.substr(0, delim);
        string b = expr.substr(delim, expr.size());

        int ai = atoi(a.c_str());
        int bi = atoi(b.c_str());

        cout << ai+bi << "\n";
    }
}
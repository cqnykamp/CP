
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


struct Tup{
    vector<int> resultTop;
    vector<int> resultBot;
};

Tup minimize_largest_cost(vector<int> num, int b, int start, vector<int> top, vector<int> bot);


Tup minimize_largest_cost(vector<int> num, int b, int start, vector<int> top, vector<int> bot) {
    vector<int> top2 (top.size() * 2, 0);
    vector<int> bot2 (bot.size() * 2, 0);

    for(int i=0; i<top.size(); i++) {
        top2[2*i] = num[start] + top[i] - 1;
        if(start == top.size() - 1) {
            top2[2*i] += 1;
        }
        bot2[2*i] = start==0 ? 0 : 1 + bot[i];

        top2[2*i + 1] = start == 0 ? 0 : 1 + top[i];
        bot2[2*i + 1] = b - num[start] + bot[i] - 1;
        if(start == top.size() - 1 ) {
            bot2[2*i] += 1;
        }

    }

    // for(int e: top2) {
    //     cout << e << " ";
    // }
    // cout << "\n";
    // for(int e: bot2) {
    //     cout << e << " ";
    // }
    // cout << "\n";

    if(start + 1 == num.size()) {
        return Tup {top2, bot2};

    } else {
        return minimize_largest_cost(num, b, start + 1, top2, bot2);
    }

}

int main() {

    int b, p;
    cin >> b >> p;

    vector<int> digits (p, 0);
    for(int i=0; i<digits.size(); i++) {
        int e;
        cin >> e;
        digits[i] = e;
        // cout << digits[i] << " ";
    }
    // cout << endl;


    vector<int> top (1,0);
    vector<int> bot (1,0);

    Tup tup = minimize_largest_cost(digits, b, 0, top , bot);

    int m = INT_MAX;
    for(int i=0; i < tup.resultTop.size(); i++) {
        int x = tup.resultTop[i];
        int y = tup.resultBot[i];

        cout << x << " " << y << endl;

        if(max(x, y) < m) {
            m = max(x, y);
        }
    }
    cout << endl;
    cout << m << endl;

}
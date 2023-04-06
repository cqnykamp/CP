
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<tuple<int, int>> sum(int sumx, int sumy, vector<int> tx, vector<int> ty, vector<int> bx, vector<int> by) {
    if(tx.empty()) {
        vector<int, int> res (1, {sumx, sumy});
        return res;
    } else {
        for(int i=0; i<tx.size(); i++) {
            int new_sumx = sumx + tx[i];
            int new_sumy = sumy + ty[i];

        }

    }

}


int main() {

    int b, p;
    cin >> b >> p; 

    vector<int> tx (p, 0);
    vector<int> bx (p, 0);
    vector<int> ty (p, 0);
    vector<int> by (p, 0);

    for(int i=0; i<p; i++) {
        int d;
        cin >> d;

        if(i == 0) {
            tx[i] = d;
            ty[i] = 0;
            bx[i] = 0;
            by[i] = b - d - 1;
        } else if(i == p - 1) {
            tx[i] = d;
            ty[i] = 1;
            bx[i] = 1;
            by[i] = b - d;
        } else {
            tx[i] = d;
            ty[i] = 1;
            bx[i] = 1;
            by[i] = b - d - 1;
        }
    }

    for(int i=0; i<p; i++) {
        printf("(%d, %d) (%d, %d)\n", tx[i], ty[i], bx[i], by[i]);
    }
}
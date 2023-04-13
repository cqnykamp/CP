#include<bits/stdc++.h>
using namespace std;

void run() {
    int n, h, m;
    cin >> n >> h >> m;
    int bedtime = h * 60 + m;
    vector<int> alarm (n, 0);
    for(int i=0; i<n; i++) {
        int ah, am;
        cin >> ah;
        cin >> am;
        alarm[i] = ah * 60 + am;
    }

    sort(alarm.begin(), alarm.end());

    for(int i=0; i<n; i++) {
        if(alarm[i] >= bedtime) {
            int dur = alarm[i] - bedtime;
            cout << dur / 60 << " " << dur % 60 << "\n";
            return;
        }
    }
    int dur = alarm[0] + 24 * 60 - bedtime;
    cout << dur / 60 << " " << dur % 60 << "\n";

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        run();
    }
}
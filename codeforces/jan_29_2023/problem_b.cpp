#include <iostream>
#include <math.h>
#include <utility>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char **argv) {

    int t;
    cin >> t;
    while(t--) {
        int n; scanf("%d", &n);

        map<int, int> divisors;

        int num = n;
        for(int i=2; i*i <= n; i++) {
            bool complete = false;
            while(!complete) {
                if(num % i == 0) {
                    ++divisors[i];
                    num = num / i;
                } else {
                    complete = true;
                }
            }
        }
        if (num > 1) {
            ++divisors[num];
        }

        int sum = 0;
        bool complete = false;
        while(!complete) {
            complete = true;

            int prod = 1;
            for(auto& it: divisors) {

                if(it.second > 0) {
                    prod *= it.first;
                    it.second --;
                }

                if(it.second > 0) {
                    complete = false;
                }
            }
            sum += prod;
        }

        cout << sum << '\n';
    }

}
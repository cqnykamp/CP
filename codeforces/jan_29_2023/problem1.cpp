#include <iostream>
#include <math.h>

int main(int argc, char **argv) {
    int t, n;
    std::cin >> t;

    for(int i=0; i < t; i++) {
        std::cin >> n;

        if(n % 2 == 0) {
            std::cout << n/2 << " " << 1 << "\n";
        } else {
            std::cout << "-1\n";
        }
    }


    return 0;
}


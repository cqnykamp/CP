
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    cout << std::fixed;
    string title;
    long double cap;
    cin >> title;
    cin >> cap;

    cout.precision(17);
    cout << min((long double) title.size(), cap) << "\n";

    return 0;
}
// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void dest(vector<vector<int>>* g, int start, set<int>* found) {
	set<int> next;
	vector<int> gs = g->at(start);
	for(int edge : gs) {
		if(! (found->count(edge) > 0)) {
			next.insert(edge);
			found->insert(edge);
		}
	}

	for(int next_start : next) {
		dest(g, next_start, found);
	}
}

int main() {
	int n;
	cin >> n;

	vector<vector<int>> g (n, vector<int> (0,0));
	for(int i=0; i<n-1; i++) {
		int input, output;
		cin >> input >> output;
        input--;
        output--;
		g[output].push_back(input);
	}

	for(int i=0; i<n; i++) {
		set<int> found;
		dest(&g, i, &found);
		if((int)found.size() == n - 1) {
			cout << i + 1 << "\n";
			return 0;
		}
	}

    cout << "-1\n";
}

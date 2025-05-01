#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<int> v;
	vector<int>::iterator it;
	for (int i = 1; i < 31; i++) {
		v.push_back(i);
	}
	for (int i = 0; i < 28; i++) {
		cin >> n;
		it = find(v.begin(), v.end(), n);
		if (it != v.end()) {
			v.erase(it);
		}
	}

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
}

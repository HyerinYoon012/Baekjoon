#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	int n, index;
	vector<int> v;
	vector<int>::iterator it;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		n = n % 42;
		if (find(v.begin(), v.end(), n) == v.end()) {
			v.push_back(n);
		}
	}

	cout << v.size();
}

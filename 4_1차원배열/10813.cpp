#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, i, j, val = 0;
	vector<int> v;
	vector<int>::iterator it;
	cin >> N >> M;
	for (int k = 1; k <= N; k++) {
		v.push_back(k);
	}
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		int temp = v.at(i - 1);
		v.at(i - 1) = v.at(j - 1);
		v.at(j - 1) = temp;
	}

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
}

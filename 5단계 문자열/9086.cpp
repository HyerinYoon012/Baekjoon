#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int T, n;
	string s;
	vector<string> v;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> s;
		v.push_back(s);
	}
	for (int i = 0; i < T; i++) {
		n = v[i].size() - 1;
		cout << v[i][0] << v[i][n] << endl;
	}
}

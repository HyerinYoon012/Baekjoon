#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, R;
	string s;
	string str = "";
	vector<string> v;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < R; k++) {
				str += s[j];
			}
		}
		v.push_back(str);
		str.clear();
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}

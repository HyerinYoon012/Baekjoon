#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	vector<string> v;
	while (cin >> s) {
		v.push_back(s);
		if (cin.peek() == '\n') break;
	}
	cout << v.size();
}

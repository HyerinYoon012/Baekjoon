#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int n;
	int sum = 0;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		
		sum += stoi(string(1, s[i]));
	}
	cout << sum;
}

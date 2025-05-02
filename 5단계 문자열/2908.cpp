#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	int c = 0;
	int d = 0;
	cin >> a >> b;
	int temp = a[0];
	a[0] = a[2];
	a[2] = temp;
	temp = b[0];
	b[0] = b[2];
	b[2] = temp;

	c = stoi(a);
	d = stoi(b);

	if (a < b) cout << b;
	else cout << a;
}

#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3, a4, a5, a6;
	cin >> a1 >> a2;
	a3 = (a2 % 10) * a1;
	a4 = ((a2 / 10) % 10) * a1;
	a5 = ((a2 / 10) / 10) * a1;
	a6 = a3 + (a4 * 10) + (a5 * 100);
	cout << a3 << endl << a4 << endl << a5 << endl << a6;
}

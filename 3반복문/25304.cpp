#include <iostream>
using namespace std;

int main() {
	int X, N, price, num;
	int sum = 0;
	cin >> X >> N;
	for (int i = 0; i < N; i++) {
		cin >> price >> num;
		sum += price * num;
	}
	if (sum == X) cout << "Yes";
	else cout << "No";
}

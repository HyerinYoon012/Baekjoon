#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3, prizeMoney, Max;
	cin >> a1 >> a2 >> a3;
	if (a1 == a2 && a2 == a3 & a1 == a3) prizeMoney = 10000 + a1 * 1000;
	else if (a1 != a2 && a2 != a3 && a1 != a3) {
		int arr[2] = { a2, a3 };
		Max = a1;
		for (int i = 0; i < 2; i++) {
			if (Max < arr[i]) Max = arr[i];
		}
		prizeMoney = Max * 100;
	}
	else {
		if (a1 == a2) prizeMoney = 1000 + a1 * 100;
		else if (a2 == a3) prizeMoney = 1000 + a2 * 100;
		else prizeMoney = 1000 + a1 * 100;
	}
	cout << prizeMoney;
}

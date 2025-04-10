#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, index;
	int Max = 0;
	vector<int>arr;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		arr.push_back(a);
		if (Max < a) Max = a;
	}
	for (int i = 0; i < 9; i++) {
		if (arr[i] == Max) index = i;
	}
	cout << Max << endl << index + 1;
}

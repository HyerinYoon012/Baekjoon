#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, a;
	int b = 0;
	vector<int> arr;
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
	}
	cin >> a;
	for (int i = 0; i < N; i++) {
		if (a == arr[i]) b++ ;
	}
	cout << b;
}

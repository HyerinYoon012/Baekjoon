#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, a;
	vector<int>arr;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.push_back(a);
	}
	int Min = arr[0];
	int Max = arr[0];

	for (int i = 1; i < N; i++) {
		if (Min > arr[i]) Min = arr[i];
		if (Max < arr[i]) Max = arr[i];
	}
	cout << Min << " " << Max;
}

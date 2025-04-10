#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int a, v;
	int num = 0;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[i] = a;
	}
	cin >> v;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v) num++;
	}
	cout << num;
	delete[] arr;
}

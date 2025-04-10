#include<iostream>
using namespace std;

int main() {
	int N, M, i, j, k;
	cin >> N >> M;
	int* arr = new int[N];
	for (int e = 0; e < M; e++) {
		cin >> i >> j >> k;
		i--;
		j--;
		for (int q = i; q <= j; q++) {
			arr[q] = k;
		}
	}
	
	for (int w = 0; w < N; w++) {
		cout << arr[w] << " ";
	}

	delete[] arr;
}

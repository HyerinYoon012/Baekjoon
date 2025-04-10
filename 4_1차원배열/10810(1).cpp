#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, i, j, k;
	vector<int>arr;
	cin >> N >> M;
	arr.resize(N);
	for (int d = 0; d < M; d++) {
		cin >> i >> j >> k;
		i--; // 1번째 바구니는 배열로 치면 인덱스가 0이므로 -1을 해줌
		j--; // 위와 같은 이유로 -1
		for (int m = i; m <= j; m++) {
			arr[m] = k;
		}
	}
	for (int e = 0; e < N; e++) {
		cout << arr[e] << " ";
	}
}

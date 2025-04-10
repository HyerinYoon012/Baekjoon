#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, X, a;
	vector<int>arr;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a < X) {
			arr.push_back(a);
		}
	}
	
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	
}

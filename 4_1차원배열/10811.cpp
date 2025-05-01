#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, a, b, temp;
	vector<int> v;
	vector<int>::iterator it;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		v.push_back(i + 1);
	}

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		int num = b - a + 1;
		int last = b - 1;
		if (num % 2 == 0) {
			for (int j = a - 1; j <= ((b + a - 2) / 2); j++) {
				temp = v.at(j);
				v.at(j) = v.at(last);
				v.at(last) = temp;
				last--;
			}
		}
		else {
			for (int j = a - 1; j < ((b + a - 2) / 2); j++) {
				temp = v.at(j);
				v.at(j) = v.at(last);
				v.at(last) = temp;
				last--;
			}
		}
		
	}

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
}

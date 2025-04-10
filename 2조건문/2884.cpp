#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	if (H == 0) {
		if (M < 45) {
			M = 60 - (45 - M);
			H = 23;
			cout << H << " " << M;
		}
		else {
			M -= 45;
			cout << H << " " << M;
		}
	}
	else {
		if (M < 45) {
			M = 60 - (45 - M);
			H--;
			cout << H << " " << M;
		}
		else {
			M -= 45;
			cout << H << " " << M;
		}
	}
}

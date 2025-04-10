#include <iostream>
using namespace std;

int main() {
	int H, M, cookingTime;
	cin >> H >> M >> cookingTime;
	
	H = (H + (M + cookingTime) / 60) % 24;
	M += cookingTime;
	if (M >= 60) {
		M %= 60;
	}

	cout << H << " " << M<<endl;
}

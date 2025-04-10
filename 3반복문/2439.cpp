#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int space = N - 1;
	int star = N - space;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		space--;
		star++;
		cout << endl;
	}
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
	double n, g;
	double sum = 0;
	vector<double> v;
	vector<double>::iterator it;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> g;
		v.push_back(g);
	}
	
	double max = v[0];

	for (it = v.begin(); it != v.end(); it++) {
		if (max < *it) max = *it;
	}

	for (it = v.begin(); it != v.end(); it++) {
		*it = *it / max * 100;
		sum += *it;
	}

	cout << sum / n;
}

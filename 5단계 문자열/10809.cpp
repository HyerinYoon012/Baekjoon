#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	map<string, int> dic;
	dic["a"] = -1;
	dic["b"] = -1;
	dic["c"] = -1;
	dic["d"] = -1;
	dic["e"] = -1;
	dic["f"] = -1;
	dic["g"] = -1;
	dic["h"] = -1;
	dic["i"] = -1;
	dic["j"] = -1;
	dic["k"] = -1;
	dic["l"] = -1;
	dic["m"] = -1;
	dic["n"] = -1;
	dic["o"] = -1;
	dic["p"] = -1;
	dic["q"] = -1;
	dic["r"] = -1;
	dic["s"] = -1;
	dic["t"] = -1;
	dic["u"] = -1;
	dic["v"] = -1;
	dic["w"] = -1;
	dic["x"] = -1;
	dic["y"] = -1;
	dic["z"] = -1;

	for (int i = 0; i < s.size(); i++) {
		int index = s.find(s[i]);
		dic[string(1, s[i])] = index;
	}

	auto it = dic.begin();

	for (int i = 0; i < dic.size(); i++) {
		cout << it->second << " ";
		it++;
	}
}

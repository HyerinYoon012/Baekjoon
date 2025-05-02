#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> v;
	string s;
	while (getline(cin, s)) {
		v.push_back(s);
		if (s.empty() || all_of(s.begin(), s.end(), ::isspace)) break;   // 공백,'\n', '\t'만 있는 문장인지 확인, all_of : 지정된 스트링 범위를 돌면서 ::isspace실행, 빈줄("") 무시는 안되므로 empty()를 씀, isspace - 한문자의 공백,\t, \n인지 확인, ::isspace - 전역함수를 명확히 호출
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}

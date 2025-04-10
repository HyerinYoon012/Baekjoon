#include <iostream>
using namespace std;

int main() {
	//알고리즘 문제 풀이에서는 예외 처리, 멀티스레드 작업 필요X -> 두 동기화를 끊고 성능을 높여 시간을 줄이는 게 더 효율적
	//동기화를 끊으면 C++ 표준 스트림이 "독립적으로" IO 버퍼링을 하게 되어 많은 양의 입출력이 있을 경우 성능이 많이 좋아짐
	ios_base::sync_with_stdio(false); //C의 stdio와 C++의 iostream의 동기화를 비활성화(평소엔 서로 동기화 상태)
	cin.tie(NULL); // 입력과 출력 연결을 끊어준다 (cin.tie(nullptr) 또는 cin.tie(0) 도 가능)
	// 원래 cout와 cin, 입출력은 묶여있다. 입력요청이 들어오면 그 전에 출력 작업이 있었을 경우(출력 버퍼에 내용이 있는 경우) 버퍼를 비워(flush) 출력
	// 입출력 많을 경우 일일이 버퍼를 지우는데 시간 오래 걸림
	int T, a, b;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b<< "\n";
	}
}

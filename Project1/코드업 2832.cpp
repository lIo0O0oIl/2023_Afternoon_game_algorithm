#include <iostream>
using namespace std;

int n, k, cnt;

// 어떤 상태를 정의할거냐
// 현재 위치, 경우당 카운트
void s(int x, int y) {
	// 종료조건. 계단이 없으니까
	if (x > n || y >= k) {
		return;
	}

	// 계단에 올랐으니 카운팅을 해야함.
	if (x == n) {
		cnt++;
		return;
	}

	s(x + 1, y + 1);
	s(x + 2, y + 1);
}

int main() {
	cin >> n >> k;
	s(0, 0);
	cout << cnt;
}
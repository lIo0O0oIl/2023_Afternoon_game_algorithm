#include <iostream>
using namespace std;

int n, k;

// 어떤 상태를 정의할거냐
// 현재 위치, 경우마다 카운트
int solve(int oo, int prev, int y) {
	// 종료조건. 계단이 없으니까
	if (oo > n || y >= k) {
		return 0;
	}

	// 계단에 올랐으니 카운팅을 해야함.
	if (oo == n) {
		return 1;
	}

	// 중복조건 확인하기
	if (prev == 0) {
		return solve(oo + 1, 1, y + 1) + solve(oo + 2, 2, y + 1) + solve(oo + 3, 3, y + 1);
	}
	else if (prev == 1) {
		return solve(oo + 2, 2, y + 1) + solve(oo + 3, 3, y + 1);
	}
	else if (prev == 2) {
		return solve(oo + 1, 1, y + 1) + solve(oo + 3, 3, y + 1);
	}
	else if (prev == 3) {
		return solve(oo + 1, 1, y + 1) + solve(oo + 2, 2, y + 1);
	}
}

int main() {
	cin >> n >> k;
	cout << solve(0, 0, 0);
}
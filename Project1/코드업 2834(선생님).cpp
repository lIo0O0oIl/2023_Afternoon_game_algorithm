#include <iostream>
using namespace std;

int n, k;
int memo[40][40][40];
int chk[40][40][40];

// oo의 위치, xx의 위치, k(제한사항)
int solve(int oo, int xx, int y) {
	// 종료조건
	if (oo > n || xx > n || y >= k) {
		return 0;
	}

	if (oo == n && xx == n) {
		return 1;
	}

	if (chk[oo][xx][y] == 1) {
		return memo[oo][xx][y];
	}
	chk[oo][xx][y] = 1;

	return memo[oo][xx][y] = solve(oo + 1, xx + 1, y + 1) + solve(oo + 2, xx + 1, y + 1)
		+ solve(oo + 1, xx + 2, y + 1) + solve(oo + 2, xx + 2, y + 1);
}

int main() {
	cin >> n >> k;
	cout << solve(0, 0, 0);
}
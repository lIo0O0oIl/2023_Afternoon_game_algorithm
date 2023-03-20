#include <iostream>
using namespace std;

int n, m, k;

int solve(int x, int y) {
	if (x > n || y >= k || x == m) {
		return 0;
	}

	if (x == n) {
		return 1;
	}

	/*if (x == m) {
		return 0;
	}*/
	return solve(x + 1, y + 1) + solve(x + 2, y + 1) + solve(x + 3, y + 1);
}

int main() {
	cin >> n >> m >> k;
	cout << solve(0, 0);
}
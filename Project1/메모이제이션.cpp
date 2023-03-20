#include <iostream>
using namespace std;

//메모이제이션 => DP(동적 프로그래밍)
int memo[201];

int f(int x) {
	// 종료조건
	if (memo[x]) return memo[x];

	// 피보나치 수열은 1, 2 1
	if (x <= 2) {
		return 1;
	}
	return memo[x] = f(x - 1) + f(x - 2);
}

int main() {
	int n;
	cin >> n;
	cout << f(n) << endl;
}
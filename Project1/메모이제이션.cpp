#include <iostream>
using namespace std;

//�޸������̼� => DP(���� ���α׷���)
int memo[201];

int f(int x) {
	// ��������
	if (memo[x]) return memo[x];

	// �Ǻ���ġ ������ 1, 2 1
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
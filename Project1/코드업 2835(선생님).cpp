#include <iostream>
using namespace std;

int n, k;

// � ���¸� �����Ұų�
// ���� ��ġ, ��츶�� ī��Ʈ
int solve(int oo, int prev, int y) {
	// ��������. ����� �����ϱ�
	if (oo > n || y >= k) {
		return 0;
	}

	// ��ܿ� �ö����� ī������ �ؾ���.
	if (oo == n) {
		return 1;
	}

	// �ߺ����� Ȯ���ϱ�
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
#include <iostream>
//#include <vector>
#include <algorithm>
using namespace std;

int n, k, cnt, result;

int main() {
	//lower_bound();
	//upper_bound();

	ios_base::sync_with_stdio(false);

	cin >> n >> k;
	int low = 1;
	long long high = n * n;
	//long long high = k;		// �̰͵� ����
	int mid;

	while (low <= high) {
		cnt = 0;
		mid = (low + high) / 2;

		for (int i = 1; i <= n; i++)
		{
			cnt += min(mid / i, n);
		}

		if (cnt < k) {	// ���� �� ���� �� �۴�.
			low = mid + 1;
		}
		else {
			result = mid;
			high = mid - 1;
		}
	}

	cout << result;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n, m;
long long vn, low, high, mid, total;
long long iMax, result;

int main() {
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	//cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(vn);
	}

	// 1. �����ؼ� ���� �ڿ� �ִ°�
	// 2. �Է¹����鼭 ���� �����ָ� �����ϴ�
	low = 0;
	high = *max_element(v.begin(), v.end());

	while (low <= high) {
		mid = (low + high) / 2;
		total = 0;		// �߷��� ���� ������ ����

		for (int i = 0; i < n; i++)
		{
			total += v[i] - mid;		// �߸� ������ �� ����
		}

		// �̺�Ž���� ������ ����
		// ū ��� �ƴѰ��
		if (total < m) {		// �������
			high = mid - 1;
		}
		else {	// ���̰� ����ϴ�
			result = mid;
			low = mid + 1;
		}

		if (result == m) {
			break;
		}
	}

	cout << result;
}
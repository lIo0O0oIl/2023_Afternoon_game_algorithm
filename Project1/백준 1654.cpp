#include <iostream>
#include <vector>
using namespace std;

//int arr[10001]; �̷��� k�� �����ص� ��
vector<int> v;
int k, n;
long long vn, low, high, mid, cnt;
long long iMax, result;

int main() {
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	//cout.tie(0);

	cin >> k >> n;

	for (int i = 0; i < k; i++)
	{
		cin >> vn;
		v.push_back(vn);
		if (iMax < v[i]) {
			iMax = v[i];
		}
	}

	// 1. �����ؼ� ���� �ڿ� �ִ°�
	// 2. �Է¹����鼭 ���� �����ָ� �����ϴ�
	low = 1;
	high = iMax;
	
	while (low <= high) {
		mid = (low + high) / 2;		// ������ �����ϴ� ����
		cnt = 0;		// �߸� ���� ����
		
		for (int i = 0; i < k; i++)
		{
			cnt += v[i] / mid;		//�������� ���ҵǾ� �����Ǿ��� ��
		}

		// �̺�Ž���� ������ ����
		// ū ��� �ƴѰ��
		if (cnt >= n) {		// �ʹ� ���� �ڸ�
			low = mid + 1;
			if (result < mid) {
				result = mid;
			}
		}
		else {	// ������, ���� �߶���
			high = mid - 1;
		}
	}

	cout << result;
}
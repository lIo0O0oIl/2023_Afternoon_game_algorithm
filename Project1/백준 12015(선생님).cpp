#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, vn, cnt;
vector<int> vec;

int main() {
	// 3 1 2 => 2

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	// lower_bound() : Ÿ�ٺ��� ���ų� ū �� ó�� ��ġ
	// upper_bound() : Ÿ�ٺ��� ó������ ū �� ��ġ
	cin >> n;
	vec.push_back(-1);
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		if (vn > vec.back()) {		// �Է��Ѱ� ���� ���ͺ��� ŭ
			vec.push_back(vn);
			cnt++;
		}
		else {	// ����, ���������
			vector<int>::iterator iter = 
			lower_bound(vec.begin(), vec.end(), vn);
			*iter = vn;
		}
	}
	cout << cnt;
}
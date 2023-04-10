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
	// lower_bound() : 타겟보다 같거나 큰 값 처음 위치
	// upper_bound() : 타겟보다 처음으로 큰 값 위치
	cin >> n;
	vec.push_back(-1);
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		if (vn > vec.back()) {		// 입력한게 지금 벡터보다 큼
			vec.push_back(vn);
			cnt++;
		}
		else {	// 작음, 덮어버리기
			vector<int>::iterator iter = 
			lower_bound(vec.begin(), vec.end(), vn);
			*iter = vn;
		}
	}
	cout << cnt;
}
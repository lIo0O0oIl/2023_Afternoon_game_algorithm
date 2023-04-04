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

	// 1. 정렬해서 가장 뒤에 있는것
	// 2. 입력받으면서 가장 높은애를 저장하는
	low = 0;
	high = *max_element(v.begin(), v.end());

	while (low <= high) {
		mid = (low + high) / 2;
		total = 0;		// 잘려서 나온 나무의 길이

		for (int i = 0; i < n; i++)
		{
			total += v[i] - mid;		// 잘린 나무의 총 길이
		}

		// 이분탐색의 원리에 따라서
		// 큰 경우 아닌경우
		if (total < m) {		// 적을경우
			high = mid - 1;
		}
		else {	// 길이가 충분하다
			result = mid;
			low = mid + 1;
		}

		if (result == m) {
			break;
		}
	}

	cout << result;
}
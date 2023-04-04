#include <iostream>
#include <vector>
using namespace std;

//int arr[10001]; 이렇게 k를 저장해도 됨
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

	// 1. 정렬해서 가장 뒤에 있는것
	// 2. 입력받으면서 가장 높은애를 저장하는
	low = 1;
	high = iMax;
	
	while (low <= high) {
		mid = (low + high) / 2;		// 랜선을 분할하는 단위
		cnt = 0;		// 잘린 랜선 개수
		
		for (int i = 0; i < k; i++)
		{
			cnt += v[i] / mid;		//랜선들이 분할되어 누적되었을 것
		}

		// 이분탐색의 원리에 따라서
		// 큰 경우 아닌경우
		if (cnt >= n) {		// 너무 많이 자름
			low = mid + 1;
			if (result < mid) {
				result = mid;
			}
		}
		else {	// 부족해, 적게 잘랐어
			high = mid - 1;
		}
	}

	cout << result;
}
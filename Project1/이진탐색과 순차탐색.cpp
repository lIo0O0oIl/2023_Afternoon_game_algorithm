#include <iostream>
using namespace std;

int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
// 순차탐색.
int main() {
	// O(N)
	/*int x;
	cin >> x;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == x) {
			cout << x << "는 " << i << "번째에 있습니다." << endl;
		}
	}*/

	// 이진탐색
	int x, low, high, mid;
	cin >> x;
	low = 0;
	high = 9;
	
	while (low <= high) {	// 크로스된 경우
		mid = (low + high) / 2;
		if (x == arr[mid]) {
			cout << x << "는 " << mid << "번 index에 있습니다." << endl;
			break;
		}
		else if (x < arr[mid]) {	// 왼쪽에 있는 상황
			high = mid - 1;
		}
		else if (x > arr[mid]) {	// 오른쪽에 있는 상황
			low = mid + 1;
		}
	}
}
#include <iostream>
using namespace std;

int arr[2001];
int n;

int f(int);

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	// 비교
	for (int i = 0; i < n; i++) {
		cout << f(i) << endl;
	}
}

// 랭킹정해주는 함수
int f(int x) {
	int rank = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[x] < arr[i]) {
			rank++;
		}
	}
	return rank;
}
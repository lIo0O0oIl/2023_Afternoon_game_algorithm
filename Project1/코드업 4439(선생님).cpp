#include <iostream>
using namespace std;

int n, door1, door2, m;
int arr[21];
int answer = 9999;

// 열린 문, 찾아가야 될 곳, 카운팅(제한사항), 
void solve(int d1, int d2, int dis, int cnt) {
	// 종료조건
	if (m == cnt)
	{
		answer = min(answer, dis);	//max(??, ??);	큰거, 작은거 구해주는 변수
		return;
	}

	// 2가지
	// 1. d1을 움직이는 경우
	// 2. d2를 움직이는 경우
	solve(arr[cnt], d2, dis + abs(arr[cnt] - d1), cnt + 1);
	solve(d1, arr[cnt], dis + abs(arr[cnt] - d2), cnt + 1);
}

int main() {
	cin >> n;
	cin >> door1 >> door2;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}

	solve(door1, door2, 0, 0);

	cout << answer;
}
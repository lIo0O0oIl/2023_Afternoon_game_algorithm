#include <iostream>
using namespace std;

// 지금은 못 풀었지만 노력하면 풀 수 있어!

int wall, startOpen1, startOpen2, wallOpen[20];
int wallOpenLength;		// 인덱스로는 - 1 붙여줘야함
int moveCnt = 0;

void solve(int nowOpen) {		// 지금 월오픈이 몇 일까
	if (wallOpen[nowOpen] == startOpen1 || wallOpen[nowOpen] == startOpen2 
		|| wallOpen[nowOpen] == 0) {
		if (nowOpen <= wall) {
			solve(nowOpen + 1);
		}
		return;
	}

	/*int a = wallOpen[nowOpen] - startOpen1;
	int b = wallOpen[nowOpen] - startOpen2;

	if (a < 0) {
		a *= -1;
	}
	if (b < 0) {
		b *= -1;
	}

	if (a > b) {
		moveCnt += b;
		startOpen2 = b;
	}
	else if (a < b) {
		moveCnt += a;
		startOpen1 = a;
	}*/

	moveCnt++;

	solve(nowOpen + 1);
}

int main() {

	cin >> wall >> startOpen1 >> startOpen2 >> wallOpenLength;

	for (int i = 0; i < wallOpenLength; i++)
	{
		cin >> wallOpen[i];
	}

	solve(0);

	cout << moveCnt;
}
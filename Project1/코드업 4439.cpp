#include <iostream>
using namespace std;

// ������ �� Ǯ������ ����ϸ� Ǯ �� �־�!

int wall, startOpen1, startOpen2, wallOpen[20];
int wallOpenLength;		// �ε����δ� - 1 �ٿ������
int moveCnt = 0;

void solve(int nowOpen) {		// ���� �������� �� �ϱ�
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
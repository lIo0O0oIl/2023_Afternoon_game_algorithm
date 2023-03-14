#include <iostream>
using namespace std;
int arr[5][5];
int f(int, int);

int main() 
{
	int max = 0;

	// 입력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	// 제일 많은 가치를 찾아야해.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (max < f(i, j)) {
				max = f(i, j);
			}
		}
	}
	cout << max;
}

// 3 X 3 가치를 구해주는 함수
int f(int a, int b) {
	int sum = 0;
	// 행과 열
	// a행 b열부터 a+2, b+2 까지의 영역 합을 구해주는 로직
	for (int i = a; i < a + 3; i++)
	{
		for (int j = b; j < b + 3; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
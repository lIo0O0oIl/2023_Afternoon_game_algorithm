#include <iostream>
using namespace std;
int arr[5][5];
int f(int, int);

int main() 
{
	int max = 0;

	// �Է�
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	// ���� ���� ��ġ�� ã�ƾ���.
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

// 3 X 3 ��ġ�� �����ִ� �Լ�
int f(int a, int b) {
	int sum = 0;
	// ��� ��
	// a�� b������ a+2, b+2 ������ ���� ���� �����ִ� ����
	for (int i = a; i < a + 3; i++)
	{
		for (int j = b; j < b + 3; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
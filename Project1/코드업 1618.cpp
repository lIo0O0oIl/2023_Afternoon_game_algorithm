#include <iostream>
using namespace std;

int main() {
	int age[3], temp;
	cin >> age[0] >> age[1] >> age[2];

	for (int i = 0; i < 2; i++)		// 0, 1 ��
	{
		for (int j = 0; j < 2 - i; j++)		// 2�� ���Ҵٰ� �ѹ� ��.
		{
			if (age[j] > age[j + 1]) {
				temp = age[j];
				age[j] = age[j + 1];
				age[j + 1] = temp;
			}
		}
	}
	// ��� �ڿ����� Ȯ���ؼ� ���� ������ �Ǵ� ����

	for (int i = 0; i < 3; i++)
	{
		cout << age[i] << " ";
	}
}
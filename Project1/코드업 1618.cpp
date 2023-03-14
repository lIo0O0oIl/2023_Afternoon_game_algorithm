#include <iostream>
using namespace std;

int main() {
	int age[3], temp;
	cin >> age[0] >> age[1] >> age[2];

	for (int i = 0; i < 2; i++)		// 0, 1 돔
	{
		for (int j = 0; j < 2 - i; j++)		// 2번 돌았다가 한번 돔.
		{
			if (age[j] > age[j + 1]) {
				temp = age[j];
				age[j] = age[j + 1];
				age[j + 1] = temp;
			}
		}
	}
	// 계속 뒤에꺼랑 확인해서 숫자 변경이 되는 것임

	for (int i = 0; i < 3; i++)
	{
		cout << age[i] << " ";
	}
}
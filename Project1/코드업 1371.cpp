#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int _b1 = 0, _b2 = 0, star = 0;
	_b1 = n;

	for (int i = 0; i < n; i++)
	{
		_b1 = n - i - 1;	// ���� 4, 3, 2, 1�� ��. ù��° ������
		_b2 = i * 2;		// ���� 0, 2, 4, 6, 8 �̵�	// �̰͵��� ��� 5�� �������� ��.

		for (int j = 0; j < n * 2; j++)
		{
			if (_b1 > 0) {
				cout << " ";
				_b1--;
			}

			if (_b1 == 0) {
				cout << "*";
				star++;
				_b1 = -1;
			}

			if (_b1 == -1 && _b2 > 0) {
				cout << " ";
				_b2--;
			}

			if (_b1 == -1 && _b2 == 0) {
				cout << "*";
				star++;
				if (star >= 2) {
					j = n * 2 + 1;
				}
			}
		}
		cout << endl;
	}


	int _b1_2 = 0, _b2_2 = 0, star_2 = 0;
	_b1_2 = n;

	for (int i = 0; i < n; i++)
	{
		_b1_2 = i;	// ���� 0, 1, 2, 3, 4 �� ��. ù��° ������
		_b2_2 = (n * 2) - (2 * (i + 1));		// 10 - 2, 4, 6, 8, 10 �̵�	// �̰͵��� ��� 5�� �������� ��.

		for (int j = 0; j < n * 2; j++)
		{
			if (_b1_2 > 0) {
				cout << " ";
				_b1_2--;
			}

			if (_b1_2 == 0) {
				cout << "*";
				star_2++;
				_b1_2 = -1;
			}

			if (_b1_2 == -1 && _b2_2 > 0) {
				cout << " ";
				_b2_2--;
			}

			if (_b1_2 == -1 && _b2_2 == 0) {
				cout << "*";
				star_2++;
				if (star_2 >= 2) {
					j = n * 2 + 1;
				}
			}
		}
		cout << endl;
	}
}
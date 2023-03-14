#include <iostream>
using namespace std;

int main() {
	int array = 0;
	cin >> array;
	int a[2001];
	
	for (int i = 0; i < array; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < array; i++)
	{
		int cnt = 0;
		for (int j = 0; j < array; j++)
		{
			if (a[i] >= a[j] && i != j) {
				cnt++;
			}

			if (j == array - 1) {
				cout << (array - cnt) << endl;
			}
		}
	}
}
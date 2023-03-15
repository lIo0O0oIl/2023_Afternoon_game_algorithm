#include <iostream>
using namespace std;

int main() {
	int n, cnt, star = 0;
	cin >> n;
	cnt = n;

	for (int i = 0; i < n; i++)
	{
		cnt = n - i;
		for (int j = 0; j < n * 2; j++)
		{
			cnt--;
			if (cnt > 0 || i) {
				cout << "-";
			}
			if (cnt <= 0) {
				if (star <= 1) {
					cout << "*";
					star++;
				}
				else {
					j = n * 2;
				}
			}
		}
		star = 0;
		cout << endl;
	}
}
#include <iostream>
using namespace std;

int main() {
	int n, cnt, star = 0;
	cin >> n;
	cnt = n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (star == 2) {
				cout << endl;
				continue;
			}

			if (j - i < n || j >= n + 1) {
				cout << " ";
			}
			else if (j == n || j == n + cnt)
			{
				cnt++;
				cout << "*";
				star++;
			}
			
		}
	}
}
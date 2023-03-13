#include <iostream>
using namespace std;

int main() {
	int n, a, b, c, cnt = 0;
	cin >> n;
	for (int a = 1; a <= n; a++)
	{
		for (int b = a; b <= n; b++)
		{
			c = n - (a + b);
				if (a + b > c && c >= b) {
					cnt++;
					cout << a << " " << b << " " << c << endl;
				}
			
		}
	}

	if (cnt == 0) {
		cout << "-1";
	}
}
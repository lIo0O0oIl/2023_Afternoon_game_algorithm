#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	/*int cnt, start;
	cnt = (n / 2) + 1;
	start = n * cnt;*/
	//int a;

	int a = n;

	for (int i = 1; i < n; i++)
	{
		a += n - i;
	}

	//cout << a;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << a << " ";
			a--;
		}
		cout << endl;
	}
}
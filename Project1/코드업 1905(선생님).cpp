#include <iostream>
using namespace std;

int n;

int f(int x) {
	if (x == 1) {
		return 1;
	}
	return f(x - 1) + x;
	//return f(x - 1) * x; �̷��� �ٲپ� �ָ� ���丮���� ��.
}

int main() {
	cin >> n;
	cout << f(n);
}
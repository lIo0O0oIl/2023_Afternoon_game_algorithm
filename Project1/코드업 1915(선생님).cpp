#include <iostream>
using namespace std;

int n;

void f(int x) {
	// ��������
	if (x <= 2)
		return 1;
	return f(x - 2) + f(x - 1);
}

int main() {
	cin >> n;
	cout << f(n);
}
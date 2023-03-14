#include <iostream>
using namespace std;

int n, sum = 0;

void f(int a) {
	if (a >= 0) return;
	sum *= a;
	f(a - 1);
}

int main() {
	cin >> n;
	f(n);
	cout << sum;
}
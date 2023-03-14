#include <iostream>
using namespace std;

int n, sum = 0, cnt = 0;

void f(int a) {
	if (cnt >= n) return;
	sum += a;
	cnt++;
	f(a + 1);
}

int main() {
	cin >> n;
	f(1);
	cout << sum;
}
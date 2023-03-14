#include <iostream>
using namespace std;

int n;

void f(int x) {
	if (x == 0) return;
	cout << x << endl;
	f(x - 1);
}

int main() {
	cin >> n;
	f(n);
}
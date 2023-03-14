#include <iostream>
using namespace std;

int s, e;

void f(int x) {
	if (x > e) return;
	if (x % 2 != 0) {
		cout << x << " ";
	}
	f(x + 1);
}

int main() {
	cin >> s >> e;
	/*if (s > e) {
		int temp = s;
		s = e;
		e = temp;
	}*/
	f(s);
}
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	if (n == 1 || m == 1 || (n == 2 && m ==2)) {
		cout << "YES";
		return 0;
	}
	else {
		cout << "NO";
	}
}
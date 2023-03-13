#include <iostream>
using namespace std;

int main() {
	int second = 0, min = 0, hour = 0;
	cin >> second;

	if (second >= 60) {
		min = second / 60;
		second %= 60;
		if (min >= 60) {
			hour = min / 60;
			min %= 60;
		}
	}

	cout << hour << " " << min << " " << second;

}
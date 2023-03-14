#include <iostream>
using namespace std;

void f(int x, int y) {
	if (x > y) return;
	if (y % 2 == 0) {
		f(x, y - 1);
		cout << y << " ";
	}
	// го╬Г╫д а╕╠м
}
int main() {

}
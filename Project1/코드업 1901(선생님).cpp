#include <iostream>
using namespace std;
int n;

void f(int x) {
	// 종료조건!
	if (x > n) return;
	cout << x << endl;
	f(x + 1);
}

int main() {
	// 10 입력되면
	// 1부터 10까지 하나씩 출력
	// 상향식 제귀
	cin >> n;
	f(1);
}
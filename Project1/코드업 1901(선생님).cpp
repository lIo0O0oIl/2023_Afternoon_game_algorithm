#include <iostream>
using namespace std;
int n;

void f(int x) {
	// ��������!
	if (x > n) return;
	cout << x << endl;
	f(x + 1);
}

int main() {
	// 10 �ԷµǸ�
	// 1���� 10���� �ϳ��� ���
	// ����� ����
	cin >> n;
	f(1);
}
#include <iostream>
#include <string>
//#include <algorithm>
using namespace std;

// �ڵ��׽�Ʈ���� �ð� ���̴� ��
// 1. endl vs '\n'    endl ���۸� ���� ������ ���� ���߿����� endl�� ����.
// 2. ios_base::sync_with_studio(false);	 �������� �۹��� ���ܼ� ��������.
// 3. cin.tie(nullptr), cout.tie(nullptr);			�������� ��¼�� �׷��� �ӵ��� ��������.

// ���⵵�� �����ϱ�? - �˰����� ������ ��Ÿ���� ô���̴�.
// �ð����⵵ - �ð�, �������⵵ - �޸� ����
// �ð����⵵ - (��)���ǥ���(�־�), ���ް� ǥ���(�ֻ�), ��Ÿǥ���(���)�� ����
// �־����� �ϴ� ������ � ��Ȳ�� �͵� �������� �ð��� �������شٴ� ����. �׷��� ���� ���� ��

int sum(int a) {
	int num = 0;
	for (int i = 1; i <= a; i++)
	{
		num += i;
	}
	return num;
}

//	Ŭ���� -> ��ä

int main() {
	//int n;
	//cin >> n;
	//cout << sum(n) << endl;

	string str;
	clock_t start, end;
	int n;
	cin >> n;
	start = clock();
	for (int i = 0; i < n; i++) {
		//str += "X";	// �̰� �� ���� vector �� push_back ������
		//str = str + "X";
	}
	end = clock();
	cout << end - start << endl;
	return 0;
}
#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> NF;		// �̸��� ����
map<string, string> NNow;		// �̸��� �� ��¥

int n, f, lm;		// �Է¹��� �� ����, ����, �뿩�Ⱓ�� ������ �ٲ� ��
string l;		// �뿩�Ⱓ

int monthArr[] = { 0, 31, 28, 32, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	cin >> n >> l >> f;			// ����, �뿩�Ⱓ, ���� �ް�

	//l = "014/00:00";		/// ���� 20,160 �� ���;���
	// l�� ������ �ٲ���.
	lm = (stoi(l.substr(0, 3)) * 24 * 60) + (stoi(l.substr(4, 2)) * 60) + stoi(l.substr(7, 2));
	//cout << lm;

	for (int i = 0; i < n; i++)
	{
		string bigTime = "", smallTime = "", product = "", name = "";
		cout << bigTime << smallTime << product << name;
		if (NF.find(name) == NF.end()) {		// �ߺ��� Ű�� ������ end �� ������
			// ���� �������� �ʾ�. ����������.
			NF[name] = -1;
			NNow[name] = bigTime + smallTime;
		}
		else {
			// �ߺ��� ���� �ִٸ� �ð��� ����ؼ� �־�����
			// ���� -1 �� ���´ٸ� �� ���� ��������. �׷��� ���߿� ���� �ƿ� ����ٸ� -1�� �������
			
			// ���� �뿩�Ⱓ�� ������ �����ֱ�.
			int mn = 0;
			//iterator<string, string> liter = NNow.find(name);

			for (int i = NNow[name].; i < stoi(bigTime.substr(5, 1) + bigTime.substr(6, 1)); i++)
			{

			}
			//int mylm;
		}
		// �ð��� �Է¹��� ���� month ������ Ȱ���ؼ� ������ �ٲٰ�, �ٲ� ���� �������
		// �ٽ��ѹ� �Ȱ��� ���� �ԷµǾ��� �� �뿩�Ⱓ�� �к��� ũ�� ���� �� �־��ְ� ����
		// find �Լ��� �̿��ؼ�?
		// ���� ���ϳ��� �ޱ��� ����ؼ� �־����
	}
}
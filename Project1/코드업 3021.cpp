#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str1, str2;
// ����� ���� ����
stack<int> answer;	//12345678912950500
// ������ ���� ����
stack<char> s1, s2;
// s1 = 12345678910111213
// s2 = 2839287

int main() {
	cin >> str1;
	cin >> str2;

	for (int i = 0; i < str1.size(); i++)
		s1.push(str1[i]);

	for (int i = 0; i < str2.size(); i++)
		s2.push(str1[i]);
	

	int extra = 0;	  // �ø���
	// ������� �� ������ �ٲ���� ��.
	// pust, pop, top, size, empth;
	
	if (s1.size() < s2.size()) {
		swap(s1, s2);
	}

	while (!s1.empty() && !s2.empty())
	{
		int x = s1.top() - '0';
		int y = s2.top() - '0';
		answer.push((x + y + extra) % 10);
		extra = (x + y + extra) / 10;
		s1.pop();
		s2.pop();
		// 2���� ���� �����ٰ���.
	}
	// �ϳ��� ����ִٸ�, �������� ó���ؾ� �Ѵ�.
	// �ø��� �ֳ�.
	if (extra != 0) {
		if (s1.empty()) {		// 23 + 99
			answer.push(extra);
			extra = 0;
		}
		else {
			while (!s1.empty()) {
				int x = s1.top() - '0';
				answer.push((x + extra) % 10);
				extra = (x + extra) / 10;
				s1.pop();
			}
		}
	}
	// ����. �׳� ������ �� extra�� 0�̶��
	else {
		while (!s1.empty())
		{
			int x = s1.top() - '0';
			answer.push((x + extra) % 10);
			extra = (x + extra) / 10;
			s1.pop();
		}
	}

	if (extra != 0) {
		answer.push(extra);
	}

	while (!answer.empty())
	{
		cout << answer.top();
		answer.pop();
	}




	//�̰� Ʋ�� ��
}
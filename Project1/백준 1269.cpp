#include <iostream>
#include <set>
using namespace std;

set<int> s1, s2;
int n1, n2, sn, cnt = 0, result = 0;

int main() {
	cin >> n1 >> n2;

	for (int i = 0; i < n1; i++)
	{
		cin >> sn;
		s1.insert(sn);
	}

	for (int i = 0; i < n2; i++)
	{
		cin >> sn;
		s2.insert(sn);
	}

	// b - a : s2 - s1, s2�� ��ҿ��� ���Ƽ� ���� s1�� s2 �� ��Ұ� �ִٸ� ī��Ʈ �÷��ֱ�
	for (auto i = s2.begin(); i != s2.end(); i++)
	{
		if (s1.find(*i) != s1.end()) {
			cnt++;
		}
	}

	// a - b : s1 - s2, s1�� ��ҿ��� ����
	for (auto i = s1.begin(); i != s1.end(); i++)
	{
		if (s2.find(*i) != s2.end()) {
			cnt++;
		}
	}

	result = (s1.size() + s2.size()) - cnt;

	cout << result;
}




//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main()
//{
//	set<long long> set1;
//	long long repeat1, repeat2, input;
//	cin >> repeat1 >> repeat2;
//	for (int i = 0; i < repeat1 + repeat2; i++)
//	{
//		cin >> input;
//		if (set1.find(input) == set1.end())
//			set1.insert(input);
//		else
//			set1.erase(input);
//	}
//	cout << set1.size();
//} �� ª�� �ִ� ��. �X




//#include <iostream>
//#include <map>
//using namespace std;
//
//map<int, bool> m;   // key�� ��������, value�� bool�� ���� ������ map ����
//int N, M;
//int num;
//
//int main(void)
//{
//	cin >> N >> M;  // N�� M�� �Է¹���
//	for (int i = 0; i < N + M; i++)  // N+M���� ���� �Է¹���
//	{
//		cin >> num;
//		if (m[num] == true)  // �Է¹��� ���� �̹� �����ϴ� ���
//			m.erase(num);   // �ش� ���� map���� ����
//		else                // �Է¹��� ���� �������� �ʴ� ���
//			m[num] = true;  // �ش� ���� map�� �߰�
//	}
//	cout << m.size();   // ���� map�� ũ�⸦ ���
//}		���� ����� �������� ��
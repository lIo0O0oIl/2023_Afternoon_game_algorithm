//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//string name, tag;
//map<string, int> cloth;
//int testcase, m, result = 1;
//
//int main() {
//	cin >> testcase;
//	for (int i = 0; i < testcase; i++)
//	{
//		cin >> m;
//		for (int j = 0; j < m; j++)
//		{
//			cin >> name >> tag;
//			cloth[tag] = j;
//		}
//		// ���� ����� ��
//
//
//		// ����� �� ���Ѱ� ��°� �ʱ�ȭ
//		cout << cloth.size() + result;		// ����� ���� �� �ϳ��� �Ǵϱ� ������ ���ϱ�������
//		result = 0;
//		cloth.clear();
//	}
//}




// ������ �ڵ�
#include <iostream>
#include <string>
#include <map>
using namespace std;

int testcase, n, result;
string name, tag;
map<string, int> m;

int main() {
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        result = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> name >> tag;
            m[tag]++;
        }
        for (const auto& iter : m)
        {
            result *= ( iter.second  + 1);
        }
        cout << result - 1 << '\n';
        m.clear();
    }
}
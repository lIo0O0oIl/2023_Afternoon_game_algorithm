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
//		// 이제 경우의 수
//
//
//		// 경우의 수 구한것 출력과 초기화
//		cout << cloth.size() + result;		// 경우의 수라서 각 하나씩 되니까 사이즈 더하기해줬음
//		result = 0;
//		cloth.clear();
//	}
//}




// 선생님 코드
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
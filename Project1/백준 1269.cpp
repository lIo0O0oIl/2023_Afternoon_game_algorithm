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

	// b - a : s2 - s1, s2의 요소에서 돌아서 만약 s1에 s2 의 요소가 있다면 카운트 늘려주기
	for (auto i = s2.begin(); i != s2.end(); i++)
	{
		if (s1.find(*i) != s1.end()) {
			cnt++;
		}
	}

	// a - b : s1 - s2, s1의 요소에서 돌기
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
//} 갸 짧은 주니 답. 갲




//#include <iostream>
//#include <map>
//using namespace std;
//
//map<int, bool> m;   // key로 정수형을, value로 bool형 값을 가지는 map 생성
//int N, M;
//int num;
//
//int main(void)
//{
//	cin >> N >> M;  // N과 M을 입력받음
//	for (int i = 0; i < N + M; i++)  // N+M개의 수를 입력받음
//	{
//		cin >> num;
//		if (m[num] == true)  // 입력받은 수가 이미 존재하는 경우
//			m.erase(num);   // 해당 수를 map에서 제거
//		else                // 입력받은 수가 존재하지 않는 경우
//			m[num] = true;  // 해당 수를 map에 추가
//	}
//	cout << m.size();   // 남은 map의 크기를 출력
//}		맵을 사용한 선생님의 답
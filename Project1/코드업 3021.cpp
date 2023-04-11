#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str1, str2;
// 결과를 위한 스택
stack<int> answer;	//12345678912950500
// 연산을 위한 스택
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
	

	int extra = 0;	  // 올림수
	// 계산했을 때 정수로 바꿔줘야 함.
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
		// 2개를 빼서 더해줄것임.
	}
	// 하나라도 비어있다면, 나머지를 처리해야 한다.
	// 올림이 있냐.
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
	// 없냐. 그냥 내리자 즉 extra가 0이라면
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




	//이거 틀림 싓
}
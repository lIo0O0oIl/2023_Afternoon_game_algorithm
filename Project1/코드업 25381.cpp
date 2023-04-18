#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

deque<int> Adq;
deque<int> Bdq;

int result;
string str;

int main() {
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		// A 와 B 를 모아
		if (str[i] == 'A') {
			Adq.push_back(i);
		}
		if (str[i] == 'B') {
			Bdq.push_back(i);
		}
		if (str[i] == 'C') {
			// c 를 만나면.... 
			if (!Bdq.empty() && Bdq.front() < i) {
				Bdq.pop_front();
				result++;
			}
		}
	}

	while (!Adq.empty() && !Bdq.empty()) {
		// 에이큐 앞에 있는거 < 비큐 앞에 있는거
		if (Adq.front() < Bdq.front()) {
			result++;
			Adq.pop_front();
			Bdq.pop_front();
		}
		else {		// a큐 앞에 있는 게 b큐 앞에 있는거
			Bdq.pop_front();
		}
	}

	cout << result << endl;
}
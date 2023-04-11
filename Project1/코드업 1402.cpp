#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, num;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		s.push(num);
	}

	for (int j = 0; j < n; j++)
	{
		cout << s.top() << " ";
		s.pop();
	}
}
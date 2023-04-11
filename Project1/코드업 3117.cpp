#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, num, sum = 0;
	stack<int> s;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	
	//cout << s.size() << endl;

	for (int j = 0; j < s.size(); j++)
	{
		//cout << s.top() << " dkjdkj" << endl;
			sum += s.top();
			s.pop();
			j--;
	}
	
	cout << sum;
}
#include <iostream>
#include <stack>
using namespace std;

stack<int> h;
int n, hi;
long long cnt = 0;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> hi;

		while (!h.empty() && hi >= h.top())
		{
			h.pop();
		}
		if (h.empty() || h.top() > hi) {
			h.push(hi);
		}

		cnt += h.size() - 1;
	}

	cout << cnt;
}
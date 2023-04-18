#include <iostream>
#include <queue>
#include <functional>
using namespace std;

priority_queue<int, vector<int>, greater<int >> pq;

int main() {
	pq.push(4);
	pq.push(203);
	pq.push(134);
	while (!pq.empty())
	{
		cout << pq.top() << '\n';
		pq.pop();
	}
}
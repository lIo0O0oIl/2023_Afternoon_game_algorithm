#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
// 이걸 내림차순이 아니라 올림차순으로 해서 5까지 사라지게 한다음에 하면 되지 않을까

int n, pqn;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n * n; i++)
	{
		cin >> pqn;
		pq.push(pqn);
	}

	for (int j = 0; j < n - 1; j++)
	{
		pq.pop();
	}

	cout << pq.top();
}
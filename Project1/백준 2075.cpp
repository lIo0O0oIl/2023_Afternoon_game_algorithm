#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
// �̰� ���������� �ƴ϶� �ø��������� �ؼ� 5���� ������� �Ѵ����� �ϸ� ���� ������

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
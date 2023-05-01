#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int number = 7;
bool visit[7];
vector<int> v[8];

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visit[start] = true;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << ' ';
		for (int i = 0; i < v[cur].size(); i++)
		{
			int next = v[cur][i];
			if (!visit[next])
			{
				q.push(next);
				visit[next] = true;
			}
		}
	}
}

int main()
{
	//1�� 2�� ����
	v[1].push_back(2);
	v[2].push_back(1);
	//1�� 3�� ����
	v[1].push_back(3);
	v[3].push_back(1);
	//2�� 3�� ����
	v[2].push_back(3);
	v[3].push_back(2);
	//2�� 4�� ����
	v[2].push_back(4);
	v[4].push_back(2);
	//2�� 5�� ����
	v[2].push_back(5);
	v[5].push_back(2);
	//3�� 6�� ����
	v[3].push_back(6);
	v[6].push_back(3);
	//3�� 7�� ����
	v[3].push_back(7);
	v[7].push_back(3);
	//4�� 5�� ����
	v[4].push_back(5);
	v[5].push_back(4);
	//6�� 7�� ����
	v[6].push_back(7);
	v[7].push_back(6);
	//bfs ����
	bfs(1);
	return 0;
}
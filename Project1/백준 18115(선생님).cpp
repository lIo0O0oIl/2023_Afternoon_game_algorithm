#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
deque<int> dq;
vector<int> v;

int main() {
	cin >> n;
	v.resize(n);
	//v.reserve();

	// 1.
	for (int i = n - 1; i >= 0; i--)
	{
		cin >> v[i];
	}
	//
	//// 2.
	//int vn;
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> vn;
	//	v.push_back(vn);
	//}

	for (int i = 0; i < n; i++)
	{
		if (v[i] == 1) {
			dq.push_front(i + 1);
		}
		else if (v[i] == 2) {
			int temp = dq.front();
			dq.pop_front();
			dq.push_front(i + 1);
			dq.push_front(temp);
		}
		else {
			dq.push_back(i + 1);
		}
	}

	deque<int>::iterator iter = dq.begin();
	for (; iter != dq.end(); iter++) {
		cout << *iter << ' ';
	}
}
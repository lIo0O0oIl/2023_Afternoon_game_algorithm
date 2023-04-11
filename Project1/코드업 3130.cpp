#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> v;
int n, vn, cnt = 0;
int now = 0;

int main() {
	ios_base::sync_with_stdio(false);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(vn);
	}

	for (int j = 1; j < n; j++)
	{
		if (v[now] > v[j]) {
			cout << v[j] << " " << j << endl;
			cnt++;
		}
		else {
			now++;
			j = now + 1;
		}
	}
	

	cout << cnt;
}
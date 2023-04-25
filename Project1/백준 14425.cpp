#include <iostream>
#include <set>
using namespace std;

set<string> s1;
int n, m, result = 0;
string sn;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> sn;
		s1.insert(sn);
	}

	for (int j = 0; j < m; j++)
	{
		cin >> sn;
		if (s1.find(sn) != s1.end()) {
			result++;
		}
	}

	cout << result;
}
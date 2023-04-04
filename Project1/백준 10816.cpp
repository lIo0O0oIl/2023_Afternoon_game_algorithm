#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v, vn;

int main() {
	//ios_base::sync_with_stdio(false);

	int n, nn;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> nn;
		v.push_back(nn);
	}

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> nn;
		vn.push_back(nn);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << upper_bound(v.begin(), v.end(), vn[i]) - lower_bound(v.begin(), v.end(), vn[i]) << " ";
	}
}
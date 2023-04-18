#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, w, l, vn;
// 트럭 수, 다리 길이, 최대하중
int sec = 0;
vector<int> v;

int main() {
	cin >> n >> w >> l;
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(vn);
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] < l) {
			sec += w - 1;
			continue;
		}

		if (v[i] + v[i + 1] < l) {
			sec += w;
			i++;
		}
	}


	cout << sec;

}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	// 3 1 2 => 2
	// 이것을 고려하지 않았음 ㅇㅇ

	vector<int> v;
	int n, num, sum = 1, temp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	temp = v[0];
	for (int j = 0; j < v.size(); j++)
	{
		if (temp < v[j]) {
			sum++;
			temp = v[j];
		}
	}

	cout << sum;
}
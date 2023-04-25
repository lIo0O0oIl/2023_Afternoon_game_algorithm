#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> m;
string name;
int total;

int main() {
	while (getline(cin, name)) {
		m[name]++;
		total++;
	}

	// 예제로 하면 total 은 29임

	for (auto& iter : m) {
		iter.second = (iter.second / total) * 100;
		cout << iter.first << " " << iter.second << endl;
	}
}
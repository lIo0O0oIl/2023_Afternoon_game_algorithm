#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	string n, a; 
	getline(cin, n);
	vector<string> num;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] != ' ') {
			a = n[i];
			num.push_back(a);
		}
	}



	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] != "0") {
			cout << num[i];
		}
	}
}
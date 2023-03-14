#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	/*if (2 <= n && m <= 50) {
		return 0;
	}*/

	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || i == n) {
			cout << "+";
			for (int i = 0; i < n - 2; i++)
			{
				cout << "-";
			}
			cout << "+";
			if (i == 1) {
				cout << endl;
			}
		}
		else if (i > 1 && i < m) {
			for (int i = 1; i <= m; i++)
			{
				if (i == 1 || i == m) {
					cout << "|";
				}
				else {
					cout << "0";
				}
			}
			cout << endl;
		}

	}

	cout << endl << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == m - 1) {
				if (j == 0 || j == n - 1) {
					cout << "+";
				}
				else {
					cout << "-";
				}

			}
			else if (j == 0 || j == n - 1) {
				cout << "|";
			}
			else {
				cout << "0";
			}
		}
		cout << endl;
	}
}



//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == 0 || i == m - 1) {
//				if (j == 0 || j == n - 1){
//					cout << "+";
//				}
//				else {
//					cout << "-";
//				}
//
//			}
//			else if (j == 0 || j == n - 1) {
//				cout << "|";
//			}
//			else {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//}
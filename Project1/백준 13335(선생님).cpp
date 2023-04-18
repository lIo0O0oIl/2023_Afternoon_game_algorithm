#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v;
queue<int> q;
int n, w, L, itime, totalW;
int vn;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> w >> L;
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(vn);
	}

	for (int i = 0; i < n; i++)
	{
		// ���� ���� w �Է� �� �� �ִ� �� �Ǵ�
		// ���� ���� totalW ������ ���� ���� �Ǵ�
		while (true) {
			if (w == q.size()) {			// ť ����� w��� �ٸ��� Ʈ������ ��������
				totalW -= q.front();
				q.pop();
			}
			if (totalW + v[i] <= L) {
				break;
			}
			q.push(0);
			itime++;
		}

		q.push(v[i]);		// ť�� Ʈ�� �߰�
		totalW += v[i];		// ���� �߰�
		itime++;	// �ð��߰�
	}

	cout << itime + w << 'n';
}
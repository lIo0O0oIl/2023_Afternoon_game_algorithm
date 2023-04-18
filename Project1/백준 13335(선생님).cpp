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
		// 내가 가진 w 입력 할 수 있는 거 판단
		// 내가 가진 totalW 다으머 넣을 건지 판단
		while (true) {
			if (w == q.size()) {			// 큐 사이즈가 w라면 다리가 트록으로 꽉차있음
				totalW -= q.front();
				q.pop();
			}
			if (totalW + v[i] <= L) {
				break;
			}
			q.push(0);
			itime++;
		}

		q.push(v[i]);		// 큐에 트럭 추가
		totalW += v[i];		// 무게 추가
		itime++;	// 시간추가
	}

	cout << itime + w << 'n';
}
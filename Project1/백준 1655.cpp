#include<iostream>
#include<queue>
using namespace std;
int n;
priority_queue<int> pqmax; // 작은것들의 max값이 top
// 큰것들의 min값이 top
priority_queue<int, vector<int>, greater<int>> pqmin;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int pqn;
        cin >> pqn;

        // 크기가 같으면 최대 힙에 넣음.
        if (pqmax.size() == pqmin.size())
            pqmax.push(pqn);
        // 아니면 최소 힙에 넣음.
        else
            pqmin.push(pqn);

        // max큐 top > min큐 top 이면
        // max큐와 min top 값을 swap해서
        // max큐의 top값에 전체수가 짝수일시 작은 수 출력
        // 전체수가 홀수일시 중간 값을 출력 조건을 맞춰줌.
        if (!pqmax.empty() && !pqmin.empty() &&
            pqmax.top() > pqmin.top())
        {
            int imax, imin;
            imax = pqmax.top();
            imin = pqmin.top();
            pqmax.pop();
            pqmin.pop();
            pqmax.push(imin);
            pqmin.push(imax);
        }
        // 중간값을 출력
        cout << pqmax.top() << '\n';
    }
}
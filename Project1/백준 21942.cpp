#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> NF;		// 이름과 벌금
map<string, string> NNow;		// 이름과 현 날짜

int n, f, lm;		// 입력받을 값 개수, 벌금, 대여기간을 분으로 바꾼 것
string l;		// 대여기간

int monthArr[] = { 0, 31, 28, 32, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	cin >> n >> l >> f;			// 개수, 대여기간, 벌금 받고

	//l = "014/00:00";		/// 분이 20,160 이 나와야함
	// l를 분으로 바꾸자.
	lm = (stoi(l.substr(0, 3)) * 24 * 60) + (stoi(l.substr(4, 2)) * 60) + stoi(l.substr(7, 2));
	//cout << lm;

	for (int i = 0; i < n; i++)
	{
		string bigTime = "", smallTime = "", product = "", name = "";
		cout << bigTime << smallTime << product << name;
		if (NF.find(name) == NF.end()) {		// 중복된 키가 없으면 end 를 돌려줌
			// 값이 존재하지 않아. 만들어줘야해.
			NF[name] = -1;
			NNow[name] = bigTime + smallTime;
		}
		else {
			// 중복된 값이 있다면 시간을 계산해서 넣어주자
			// 만약 -1 이 나온다면 이 값을 지워주자. 그래서 나중에 값이 아예 비었다면 -1을 출력하자
			
			// 나의 대여기간을 분으로 구해주기.
			int mn = 0;
			//iterator<string, string> liter = NNow.find(name);

			for (int i = NNow[name].; i < stoi(bigTime.substr(5, 1) + bigTime.substr(6, 1)); i++)
			{

			}
			//int mylm;
		}
		// 시간을 입력받은 것을 month 변수를 활용해서 분으로 바꾸고, 바꾼 것을 기반으로
		// 다시한번 똑같은 것이 입력되었을 때 대여기간인 분보다 크면 벌금 값 넣어주고 ㅇㅇ
		// find 함수를 이용해서?
		// 조건 중하나로 달까지 계산해서 넣어야함
	}
}
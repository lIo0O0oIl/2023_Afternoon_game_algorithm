#include <iostream>
#include <string>
//#include <algorithm>
using namespace std;

// 코딩테스트에서 시간 줄이는 법
// 1. endl vs '\n'    endl 버퍼를 비우기 때문에 게임 개발에서는 endl이 좋다.
// 2. ios_base::sync_with_studio(false);	 독립적인 퍼버가 생겨서 빨리진다.
// 3. cin.tie(nullptr), cout.tie(nullptr);			종속적인 어쩌고 그래서 속도가 빨라진다.

// 복잡도란 무엇일까? - 알고리즘의 성능을 나타내는 척도이다.
// 시간복잡도 - 시간, 공간복잡도 - 메모리 차지
// 시간복잡도 - (★)빅오표기법(최악), 오메가 표기법(최상), 세타표기법(평균)이 있음
// 최악으로 하는 이유는 어떤 상황이 와도 이정도의 시간을 보장해준다는 것임. 그래서 가장 많이 씀

int sum(int a) {
	int num = 0;
	for (int i = 1; i <= a; i++)
	{
		num += i;
	}
	return num;
}

//	클래스 -> 객채

int main() {
	//int n;
	//cin >> n;
	//cout << sum(n) << endl;

	string str;
	clock_t start, end;
	int n;
	cin >> n;
	start = clock();
	for (int i = 0; i < n; i++) {
		//str += "X";	// 이게 더 빠름 vector 의 push_back 개념임
		//str = str + "X";
	}
	end = clock();
	cout << end - start << endl;
	return 0;
}
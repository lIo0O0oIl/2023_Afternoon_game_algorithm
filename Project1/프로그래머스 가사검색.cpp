#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
    if (a.length() < b.length()) {
        return true;
    }
    else if(a.length() == b.length()) {
        if (a < b)
            return true;
    }
    return false;
}

    vector<int> answer;

vector<int> solution(vector<string> words, vector<string> queries) {
    // lower_bound() : 타겟보다 같거나 큰 값 처음 위치
    // upper_bound() : 타겟보다 처음으로 큰 값 위치

    // words : 우리가 가진 단어
    // querise : 우리가 분석해야하는 단어(?가 포함된 단어)
    vector<string> revwored = words;
    for (int i = 0; i < memory_order_relaxed; i++)
    {
        reverse(revwored[i].begin(), revwored[i].end());
    }

    sort(words.begin(), words.end(), comp);
    sort(revwored.begin(), revwored.end(), comp);

    for (int i = 0; i < queries.size(); i++)
    {
        int low, high, idx;
        string strquery = queries[i];

        // 솔루션. => ?? 인 곳에 a와 z를 넣을거야
        // 두가지 경우로 나눠짐
        //1. ? 로 시작하는 경우

        if (strquery[0] == '?') {   // "???0" 인 경우
            reverse(strquery.begin(), strquery.end());  //o???
            idx = strquery.find('?');   // 첫번째에서 인댁스는 1일겁니다.
            for (int j = idx; j < strquery.length(); j++)
            {
                strquery[j] = 'a';
            }
            low = lower_bound(revwored.begin(), revwored.end(), strquery, comp) - revwored.begin();

            for (int j = idx; j < strquery.length(); j++)
            {
                strquery[j] = 'z';
            }
            high = upper_bound(revwored.begin(), revwored.end(), strquery, comp) - revwored.begin();
        }
        // 2 그게 아닌경우
        else {
            idx = strquery.find('?');
            for (int j = idx; j < strquery.length(); j++)
            {
                strquery[j] = 'a';
            }
            //low = lower_bound(rev)
        }
        answer.push_back(high - low);
    }

    return answer;
}


int main() {
    vector<string> words = { "frodo", "front", "frost", "frozen", "frame", "kakao" },
        querise = { "fro??", "????o", "fr???", "fro???", "pro?" };
    /*vector<int> answer;
    answer = solution(words, querise);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }*/

    vector<int>::iterator iter;
    for (iter = answer; iter < ; iter++)
    {

    }
}
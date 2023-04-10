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
    // lower_bound() : Ÿ�ٺ��� ���ų� ū �� ó�� ��ġ
    // upper_bound() : Ÿ�ٺ��� ó������ ū �� ��ġ

    // words : �츮�� ���� �ܾ�
    // querise : �츮�� �м��ؾ��ϴ� �ܾ�(?�� ���Ե� �ܾ�)
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

        // �ַ��. => ?? �� ���� a�� z�� �����ž�
        // �ΰ��� ���� ������
        //1. ? �� �����ϴ� ���

        if (strquery[0] == '?') {   // "???0" �� ���
            reverse(strquery.begin(), strquery.end());  //o???
            idx = strquery.find('?');   // ù��°���� �δ콺�� 1�ϰ̴ϴ�.
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
        // 2 �װ� �ƴѰ��
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
// #12933 정수 내림차순으로 배치하기
// https://programmers.co.kr/learn/courses/30/lessons/12933?language=cpp

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    vector<int> answer;
    string fin_answer = "";
    string n_to_str = to_string(n);
    
    for (int i = 0 ; i < n_to_str.length(); i++){
        int tmp = stoi(n_to_str.substr(i, 1));
        answer.push_back(tmp);
    }
    sort(answer.rbegin(), answer.rend());
    
    for (int j = 0; j < answer.size(); j++){
        fin_answer += to_string(answer[j]);
    }
    return stol(fin_answer);
}
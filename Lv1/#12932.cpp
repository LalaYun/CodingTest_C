// #12932 자연수 뒤집어 배열로 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12932?language=cpp

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string n_to_str = to_string(n);
    reverse(n_to_str.begin(), n_to_str.end());
    
    for (int i = 0; i < n_to_str.length(); i++){
        int tmp = stoi(n_to_str.substr(i, 1));
        answer.push_back(tmp);
    }
    return answer;
}
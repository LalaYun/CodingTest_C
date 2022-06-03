// #12954 x만큼 간격이 있는 n개의 숫자
// https://programmers.co.kr/learn/courses/30/lessons/12954?language=cpp

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for (int i = 0; i < n; i++){
        long long tmp = x + x*i;
        answer.push_back(tmp);
    }
    return answer;
}
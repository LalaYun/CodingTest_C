// #12944 평균구하기
// https://programmers.co.kr/learn/courses/30/lessons/12944?language=cpp#

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (int i = 0 ; i < arr.size(); i++){
        answer += arr[i];
    }
    return answer / arr.size();
}
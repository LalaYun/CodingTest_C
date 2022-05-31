// #12931 자릿수 더하기
// https://programmers.co.kr/learn/courses/30/lessons/12931?language=cpp

#include <iostream>

using namespace std;
int solution(int n)
{   
    int answer = 0;
    
    while (n >= 1) {
        answer += (n%10);
        n = n / 10;
    }

    return answer;
}
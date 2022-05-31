// #12937 짝수와 홀수
// https://programmers.co.kr/learn/courses/30/lessons/12937?language=cpp

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    if (num % 2 == 0) {return "Even";}
    else {return "Odd";}
}
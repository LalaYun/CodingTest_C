// #12948 핸드폰 번호 가리기
// https://programmers.co.kr/learn/courses/30/lessons/12948?language=cpp

#include <string>

using namespace std;

string solution(string phone_number) {
    for (int i = phone_number.length() - 5; i >= 0; i--){
        phone_number.replace(i, 1, "*");
    }
    return phone_number;
}
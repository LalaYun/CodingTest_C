// #12947 하샤드 수
// https://programmers.co.kr/learn/courses/30/lessons/12947?language=cpp

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    string x_to_str = to_string(x);
    int x_sum = 0;
    
    for (int i = 0; i < x_to_str.length(); i++){
        x_sum += stoi(x_to_str.substr(i, 1));
    }
    
    if (x % x_sum == 0) {
        return true;
    }
    
    return false;
}
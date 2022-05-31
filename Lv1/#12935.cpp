// #12935 제일 작은 수 제거하기
// https://programmers.co.kr/learn/courses/30/lessons/12935?language=cpp

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int minIndex = 0;
    vector<int> answer(1,-1);
    minIndex = 0;
    for (int i = 0; i < arr.size(); i++){
        for (int j = i+1; j < arr.size(); j++){
            if (arr[minIndex] > arr[i])
                minIndex = i;
            else if (arr[minIndex] > arr[j]) 
                minIndex = j;
        }
    }
    arr.erase(arr.begin() + minIndex);
    if (arr.empty())
        return answer;
    else 
        return arr;
}
// #12950 행렬의 덧셈
// https://programmers.co.kr/learn/courses/30/lessons/12950?language=cpp

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for (int i = 0; i < arr1.size(); i ++) {
        vector<int> tmp_arr;
        for (int j = 0; j < arr1[i].size(); j++) {
            int tmp = arr1[i][j] + arr2[i][j];
            tmp_arr.push_back(tmp);
        }
        answer.push_back(tmp_arr);
    }
    return answer;
}
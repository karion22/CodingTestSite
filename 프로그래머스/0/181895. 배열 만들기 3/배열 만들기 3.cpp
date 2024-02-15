#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for(auto iter = intervals.begin(); iter != intervals.end(); iter++)
    {
        for(int i = (*iter)[0], end = (*iter)[1]; i <= end; i++)
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
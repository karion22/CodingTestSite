#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    for(int h = 0; h < n; h++)
    {
        vector<int> item;
        for(int w = 0; w < n; w++)
        {
            item.push_back(h == w ? 1 : 0);
        }
        answer.push_back(item);
    }
    
    return answer;
}
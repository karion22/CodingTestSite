#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    
    int height = arr.size();
    int width = arr[0].size();
    
    int maxValue = max(height, width);
    
    vector<vector<int>> answer(maxValue, vector<int>(maxValue));
    
    for(int h = 0; h < height; h++)
    {
        for(int w = 0; w < width; w++)
        {
            answer[h][w] = arr[h][w];
        }
    }
    
    return answer;
}
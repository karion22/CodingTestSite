#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n));
    
    int num = 1;
    int rowBegin = 0, rowEnd = n - 1, colBegin = 0, colEnd = n - 1;
    
    while(rowBegin <= rowEnd && colBegin <= colEnd)
    {
        for(int i = colBegin; i <= colEnd; i++)
            answer[rowBegin][i] = num++;        
        rowBegin++;
        
        for(int i = rowBegin; i <= rowEnd; i++)
            answer[i][colEnd] = num++;
        colEnd--;
        
        for(int i = colEnd; i >= colBegin; i--)
            answer[rowEnd][i] = num++;
        rowEnd--;
        
        for(int i = rowEnd; i >= rowBegin; i--)
            answer[i][colBegin] = num++;
        colBegin++;
    }
    
    return answer;
}
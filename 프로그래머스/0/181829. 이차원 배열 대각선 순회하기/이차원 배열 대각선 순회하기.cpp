#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    
    int height = board.size();
    int width = board[0].size();
    
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if(i + j <= k)
                answer += board[i][j];
        }
    }   
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> edges) {
    vector<int> answer(4, 0);
    
    int outter[1000001];
    int inner[1000001];
    int maxNumber = 0;
    
    for(int i = 0; i < edges.size(); i++)
    {
        outter[edges[i][0]]++;
        inner[edges[i][1]]++;
        
        if(maxNumber < edges[i][0])
            maxNumber = edges[i][0];
        
        if(maxNumber < edges[i][1])
            maxNumber = edges[i][1];
    }
    
    int startSpot;
    for(int i = 1; i < maxNumber; i++)
    {
        if(outter[i] >= 2)
        {
            if(inner[i] == 0)
                startSpot = i;
            else
                answer[3]++;
                
        }
        if(outter[i] >= 1 && inner[i] == 0)
            answer[2]++;
    }
    
    // 생성한 정점의 번호, 도넛 그래프, 막대 그래프, 8자 그래프
    answer[0] = startSpot;
    answer[1] = outter[startSpot] - answer[2] - answer[3];
    
    return answer;
}
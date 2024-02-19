#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = -1;    
    
    int lastTime = (attacks.size() > 0 ? attacks[attacks.size() - 1][0] : 0);
    int attackIdx = 0, bandTick = 0;
    
    for(int t = 0; t <= lastTime; t++)
    {
        if(t == 0)
        {
            answer = health;
            attackIdx = 0;
            bandTick = 0;
        }
        else
        {
            if(attacks[attackIdx][0] == t)
            {
                answer -= attacks[attackIdx][1];
                if(answer <= 0)
                    return -1;
                attackIdx++;
                bandTick = 0;
            }
            else
            {
                bandTick++;
                answer += bandage[1];
                if(bandTick >= bandage[0])
                {
                    answer += bandage[2];
                    bandTick = 0;
                }
                
                if(answer > health)
                    answer = health;
            }
        }
    }    
    
    return answer;
}
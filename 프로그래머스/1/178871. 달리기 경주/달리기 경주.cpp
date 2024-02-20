#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    map<string, int> playersRank;
    
    // map 구성
    for(int i = 0, end = players.size(); i < end; i++)
    {
        playersRank[players[i]] = i;
    }
    
    // 로직
    for(const string& call : callings)
    {
        int idx = playersRank[call];
        if(idx >= 1)
        {
            string temp = players[idx - 1];
            players[idx - 1] = call;
            players[idx] = temp;
            
            playersRank[call] = idx - 1;
            playersRank[temp] = idx;            
        }
    }
    
    return players;
}
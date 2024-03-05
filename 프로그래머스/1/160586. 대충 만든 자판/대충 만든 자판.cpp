#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> table;
    
    string key;
    // Map 구성
    for(int i = 0, end = keymap.size(); i < end; i++)
    {
        key = keymap[i];
        
        for (int j = 0, endJ = key.length(); j < endJ; j++)
        {
            if(table.find(key[j]) == table.end())
                table[key[j]] = j + 1;
            else if(table[key[j]] > j + 1)
                table[key[j]] = j + 1;
        }
    }
    
    int res, value;
    bool isExist;
    // Target 계산    
    for (int i = 0, end = targets.size(); i < end; i++)
    {
        isExist = true;
        key = targets[i];
        res = 0;

        for (int j = 0, endJ = key.length(); j < endJ; j++)
        {
             value = table[key[j]];
             if (value <= 0)
             {
                 isExist = false;
                 break;
             }
             else
                 res += value;
        }

        if(isExist == false)
            answer.push_back(-1);
        else
            answer.push_back(res);
    }
    
    return answer;
}
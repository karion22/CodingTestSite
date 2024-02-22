#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    map<string, int> table;
    // Table Map 구성
    for(int i = 0, end = name.size(); i < end; i++)
    {
        table[name[i]] = yearning[i];
    }
    
    // 계산
    int sum = 0;
    for(int i = 0, end = photo.size(); i < end; i++)
    {
        sum = 0;
        
        for(int j = 0, endJ = photo[i].size(); j < endJ; j++)
        {
            sum += table[photo[i][j]];
        }
        answer.push_back(sum);
    }
    
    return answer;
}
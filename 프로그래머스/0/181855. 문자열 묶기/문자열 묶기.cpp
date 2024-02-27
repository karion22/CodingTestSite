#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    map<int, int> table;
    
    for(int i = 0, end = strArr.size(); i < end; i++)
    {
        int size = strArr[i].size();
        
        table[size]++;
    }
    
    for(auto c : table)
    {
        if(answer < c.second)
            answer = c.second;
    }
    
    return answer;
}
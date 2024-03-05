#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    while(section.empty() == false)
    {
        auto value = section.front();
        
        for(int i = 0; i < m; i++)
        {
            section.erase(remove(section.begin(), section.end(), value + i), section.end());
        }
        answer++;
    }
    
    return answer;
}
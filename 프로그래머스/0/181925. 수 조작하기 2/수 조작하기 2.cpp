#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int key = 0;
    for(auto iter = numLog.begin(); iter != numLog.end() - 1; iter++)
    {
        key = *(iter + 1) - *iter;
        
        switch(key)
        {
            case 1: answer += 'w'; break;
            case -1: answer += 's'; break;
            case 10: answer += 'd'; break;
            case -10: answer += 'a'; break;                
        }
    }
    
    return answer;
}
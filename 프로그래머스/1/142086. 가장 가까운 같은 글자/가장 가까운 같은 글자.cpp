#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;    
    
    for(int i = 0, end = s.length(); i < end; i++)
    {
        if(i == 0)
            answer.push_back(-1);
        else
        {
            bool isExist = false;
            for(int j = i - 1; j >= 0; j--)
            {
                if(s[i] == s[j])
                {
                    isExist = true;
                    answer.push_back(i - j);
                    break;
                }
            }
            if(isExist == false)
                answer.push_back(-1);
        }
    }
    
    return answer;
}
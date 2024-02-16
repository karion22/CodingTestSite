#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    for(int i = 0, end = str_list.size(); i < end; i++)
    {
        if(str_list[i] == "l")
        {
            for(int n = 0; n < i; n++)
                answer.push_back(str_list[n]);
            break;
        }
        else if(str_list[i] == "r")
        {
            for(int n = i + 1; n < end; n++)
                answer.push_back(str_list[n]);
            break;
        }       
    }    
    
    return answer;
}
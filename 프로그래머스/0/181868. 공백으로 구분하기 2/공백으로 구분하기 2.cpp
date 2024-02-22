#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string temp = "";
    
    for(int i = 0, end = my_string.length(); i < end; i++)
    {
        if(my_string[i] == ' ')
        {
            if(temp.empty() == false)
            {
                answer.push_back(temp);
                temp = "";
            }
        }
        else
        {
            temp += my_string[i];
        }
    }
    
    if(temp.empty() == false)
        answer.push_back(temp);
    
    return answer;
}
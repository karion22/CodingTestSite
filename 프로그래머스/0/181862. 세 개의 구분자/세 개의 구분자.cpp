#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;    
    
    string temp;
    for(const char& c : myStr)
    {
        switch(c)
        {
            case 'a':
            case 'b':
            case 'c':
                {
                    if(temp.empty() == false)
                        answer.push_back(temp);
                    temp = "";
                }
                break;
            default:
                temp += c;
                break;
        }
    }
    
    if(temp.empty() == false)
        answer.push_back(temp);
    
    if(answer.empty())
        answer.push_back("EMPTY");
    
    return answer;
}
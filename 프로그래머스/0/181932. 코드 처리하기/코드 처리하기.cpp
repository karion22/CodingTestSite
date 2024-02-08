#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    bool mode = false;
    const char* c = code.c_str();
    
    for(int i = 0, end = code.length(); i < end; i++)
    {
        if(c[i] == '1')
        {
            mode = !mode;
        }
        else            
        {
            if(mode == 0)
            {
                if(i % 2 == 0)
                    answer += c[i];
            }
            else
            {
                if(i % 2 == 1)
                    answer += c[i];
            }            
        }
    }
    
    if(answer.empty())
        answer = "EMPTY";
    
    return answer;
}
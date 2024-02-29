#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    
    bool isChecked = true;
    for(int i = 0, end = n_str.length(); i < end; i++)
    {
        if(isChecked)
        {
            if(n_str[i] == '0')
                continue;
            else
                isChecked = false;
        }
        
        answer += n_str[i];
    }
    
    return answer;
}
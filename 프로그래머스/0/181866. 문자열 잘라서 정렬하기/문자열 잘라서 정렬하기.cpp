#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    
    string temp;
    for(const char& c : myString)
    {
        if(c == 'x')
        {
            if(temp.empty() == false)
                answer.push_back(temp);
            temp = "";
        }
        else
        {
            temp += c;
        }
    }
    
    if(temp.empty() == false)
        answer.push_back(temp);
    
    sort(answer.begin(), answer.end());
    
    return answer;
}
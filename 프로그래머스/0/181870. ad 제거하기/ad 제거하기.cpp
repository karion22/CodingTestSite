#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i = 0, end = strArr.size(); i < end; i++)
    {
        if(strArr[i].find("ad") == string::npos)
            answer.push_back(strArr[i]);
    }
    
    return answer;
}
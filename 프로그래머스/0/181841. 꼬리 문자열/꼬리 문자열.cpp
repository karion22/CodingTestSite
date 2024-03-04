#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    for(int i = 0, end = str_list.size(); i < end; i++)
    {
        if(str_list[i].find(ex) != string::npos)
            continue;
        answer += str_list[i];
    }
    
    return answer;
}
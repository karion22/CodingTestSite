#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    int start = 0, tick = 0;
    for(int i = 0, end = my_string.length(); i < end; i++)
    {
        if(my_string[i] == ' ')
        {
            answer.push_back(my_string.substr(start, tick));
            start = i + 1;
            tick = 0;
        }
        else
            tick++;
    }
    
    answer.push_back(my_string.substr(start, my_string.length()));
    
    return answer;
}
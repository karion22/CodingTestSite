#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    int index = 0;
    for(auto part : parts)
    {
        for(int i = part[0], e = part[1]; i <= e; i++)
        {
            const char* str = my_strings[index].c_str();
            answer += str[i];
        }
        index++;
    }
    
    return answer;
}
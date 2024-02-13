#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";    
    
    for(int i = c - 1, end = my_string.size(); i < end; i += m)
    {
        answer += my_string[i];
    }
    
    return answer;
}
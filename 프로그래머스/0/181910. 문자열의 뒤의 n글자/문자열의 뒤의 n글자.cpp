#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(auto iter = my_string.begin() + my_string.size() - n; iter != my_string.end(); iter++)
        answer += (*iter);
    
    return answer;
}
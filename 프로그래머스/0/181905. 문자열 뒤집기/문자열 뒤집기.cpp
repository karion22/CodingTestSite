#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    for(auto iter = my_string.begin() + e; iter != my_string.begin() + s - 1; iter--)
    {
        answer += *iter;
    }
    
    my_string.replace(my_string.begin() + s, my_string.begin() + e + 1, answer);
    
    return my_string;
}
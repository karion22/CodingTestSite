#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    for(int i = 0, end = my_string.length(); i < end; i++)
    {
        if(find(indices.begin(), indices.end(), i) == indices.end())
            answer += my_string[i];
    }
    
    return answer;
}
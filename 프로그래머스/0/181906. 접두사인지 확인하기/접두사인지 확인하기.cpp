#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_prefix) {    
    vector<string> prefix;
    for(int i = 0, end = my_string.size(); i < end; i++)
    {
        prefix.push_back(my_string.substr(0, i + 1));
    }
    
    auto iter = find(prefix.begin(), prefix.end(), is_prefix);
    return (iter == prefix.end() ? 0 : 1);
}
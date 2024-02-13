#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    
    vector<string> vecSuffix;
    for(int i = 0, end = my_string.size(); i < end; i++)
        vecSuffix.push_back(my_string.substr(i));
    
    auto iter = find(vecSuffix.begin(), vecSuffix.end(), is_suffix);
    if(iter == vecSuffix.end())
        return 0;
    else
        return 1;    
}
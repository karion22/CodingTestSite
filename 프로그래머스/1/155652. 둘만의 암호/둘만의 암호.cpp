#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) 
{
    // 알파벳 목록 구성하기 (1번만 하자)
    vector<char> alphabet;
    for(char c = 'a'; c <= 'z'; c++)
    {
        if(skip.find(c) == string::npos)        
            alphabet.push_back(c);
    }
    
    for(char& c : s)
    {        
        int idx = find(alphabet.begin(), alphabet.end(), c) - alphabet.begin() + index;
        if(idx >= alphabet.size()) idx %= alphabet.size();
        c = alphabet[idx];        
    }
    return s;
}
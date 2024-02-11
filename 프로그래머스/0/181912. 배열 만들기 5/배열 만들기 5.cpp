#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(auto intStr : intStrs)
    {
        const char* cStr = intStr.c_str();
        string str;
        
        for(int i = s; i < s + l; i++)
            str += cStr[i];
        
        int res = stoi(str);
        
        if(res > k)
            answer.push_back(res);
    }
    return answer;
}
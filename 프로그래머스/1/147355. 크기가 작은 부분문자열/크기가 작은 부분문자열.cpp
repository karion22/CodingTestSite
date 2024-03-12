#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    long pNum = stol(p);    
        
    for(int i = 0; i <= t.length() - p.length(); i++)
    {
        string sub = t.substr(i, p.length());
        long subNum = stol(sub);
        
        if(subNum <= pNum)
            answer++;
    }
    
    return answer;
}
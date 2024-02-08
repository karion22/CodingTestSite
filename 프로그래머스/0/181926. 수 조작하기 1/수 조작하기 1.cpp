#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {    
    vector<char> ch(control.begin(), control.end());
    
    for(int i = 0, end = ch.size(); i < end; i++)
    {
        if(ch[i] == 'w')
            n++;
        else if(ch[i] == 's')
            n--;
        else if(ch[i] == 'd')
            n += 10;
        else if(ch[i] == 'a')
            n -= 10;
    }
    
    return n;
}
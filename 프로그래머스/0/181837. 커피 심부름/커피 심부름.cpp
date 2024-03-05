#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for(int i = 0, end = order.size(); i < end; i++)
    {
        if(order[i].find("cafelatte") != string::npos)
            answer += 5000;
        else
            answer += 4500;
    }
    return answer;
}
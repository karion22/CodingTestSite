#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    
    for(int i = 1, end = included.size(); i <= end; i++)
    {
        if(included[i - 1])
            answer += (a + d * (i - 1));
    }
    
    return answer;
}
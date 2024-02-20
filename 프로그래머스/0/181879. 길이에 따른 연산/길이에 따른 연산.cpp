#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int length = num_list.size();
    if(length >= 11)
    {
        for(int i = 0; i < length; i++)
            answer += num_list[i];
    }
    else
    {
        answer = 1;
        for(int i = 0; i < length; i++)
            answer *= num_list[i];
    }
    
    return answer;
}
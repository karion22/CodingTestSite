#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int value = 0;
    for(int i = 0, end = num_list.size(); i < end; i++)
    {
        value = num_list[i];
        while(value > 1)
        {
            if(value % 2 == 0)
            {
                value /= 2;
                answer++;
            }
            else 
            {
                value = (value - 1) / 2;
                answer++;
            }
        }
    }
    
    return answer;
}
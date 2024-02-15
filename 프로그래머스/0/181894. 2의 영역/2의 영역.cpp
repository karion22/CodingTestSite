#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int firstPos = -1, lastPos = -1;
    for(int i = 0, end = arr.size(); i < end; i++)
    {
        if(arr[i] == 2)
        {
            if(firstPos == -1)
                firstPos = i;
            
            lastPos = i;
        }
    }
    
    if(firstPos == -1)
        answer.push_back(-1);
    else
    {
        for(int i = firstPos; i <= lastPos; i++)
            answer.push_back(arr[i]);
    }
    
    return answer;
}
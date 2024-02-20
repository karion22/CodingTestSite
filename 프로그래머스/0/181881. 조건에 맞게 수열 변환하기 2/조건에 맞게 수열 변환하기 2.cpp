#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool isComplete = false;
    
    while(isComplete == false)
    {
        isComplete = true;
        
        for(int i = 0, end = arr.size(); i < end; i++)
        {
            if(arr[i] >= 50 && arr[i] % 2 == 0)
            {
                arr[i] = arr[i] / 2;
                isComplete = false;
            }
            else if(arr[i] < 50 && arr[i] % 2 == 1)
            {
                arr[i] = arr[i] * 2 + 1;
                isComplete = false;
            }
        }
        
        if(isComplete == false)
            answer++;
    }    
    
    return answer;
}
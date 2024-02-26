#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    for(int i = 0, end = flag.size(); i < end; i++)
    {
        if(flag[i] == true)
        {
            for(int n = 0, endN = arr[i] * 2; n < endN; n++)
            {
                answer.push_back(arr[i]);
            }
        }
        else
        {
            for(int n = 0, endN = arr[i]; n < endN; n++)
            {
                if(answer.empty() == false)
                    answer.pop_back();
            }
        }
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
        for(int i = 0, end = arr.size(); i < end; i++)
        {
            if(answer.size() >= k)
                break;
            
            if(answer.empty()) 
            {
                answer.push_back(arr[i]);
            }
            else
            {
                if(find(answer.begin(), answer.end(), arr[i]) == answer.end())
                    answer.push_back(arr[i]);
            }            
        }
        
        for(int i = answer.size(); i < k; i++)
            answer.push_back(-1);
    
    return answer;
}
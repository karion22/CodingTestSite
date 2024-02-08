#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    int value;
    
    for(auto iter = queries.begin(); iter != queries.end(); iter++)
    {             
        value = -1;
        for(int i = (*iter)[0], end = (*iter)[1], k = (*iter)[2]; i <= end; i++)
        {
            if(arr[i] > k)
            {
                if(value <= 0)
                    value = arr[i];
                else
                    value = (value > arr[i] ? arr[i] : value);
            }
        }        
        answer.push_back(value);
    }
    return answer;
}
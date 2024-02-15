#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {    
    
    for(int i = 0, end = query.size(); i < end; i++)
    {
        int value = query[i];
        
        if(i % 2 == 0)
        {
            arr.erase(arr.begin() + value + 1, arr.end());
        }
        else
        {
            arr.erase(arr.begin(), arr.begin() + value);
        }
    }
    
    return arr;
}
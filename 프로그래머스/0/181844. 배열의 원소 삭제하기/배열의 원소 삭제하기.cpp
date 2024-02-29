#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for(int i = 0, end = delete_list.size(); i < end; i++)
    {
        auto iter = remove(arr.begin(), arr.end(), delete_list[i]);
        
        if(iter != arr.end())
            arr.erase(iter);
    }    
    return arr;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    int temp = 0;
    for(auto iter = queries.begin(); iter != queries.end(); iter++)
    {
        temp = arr[(*iter)[0]];
        arr[(*iter)[0]] = arr[(*iter)[1]];
        arr[(*iter)[1]] = temp;
    }
    
    return arr;
}
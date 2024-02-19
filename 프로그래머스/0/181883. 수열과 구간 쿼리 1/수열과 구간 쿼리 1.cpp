#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    int s = 0, e = 0;
    for(int x = 0, endX = queries.size(); x < endX; x++)
    {
        s = queries[x][0];
        e = queries[x][1];
        
        for(int i = s; i <= e; i++)
        {
            arr[i] += 1;
        }
    }
    
    return arr;
}
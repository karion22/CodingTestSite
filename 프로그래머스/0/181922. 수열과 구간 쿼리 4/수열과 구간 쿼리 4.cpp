#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for(auto itor = queries.begin(); itor != queries.end(); itor++)
    {
        for(int i = (*itor)[0], end = (*itor)[1]; i <= end; i++)
        {
            if(i % (*itor)[2] == 0)
                arr[i]++;
        }
    }
    
    return arr;
}
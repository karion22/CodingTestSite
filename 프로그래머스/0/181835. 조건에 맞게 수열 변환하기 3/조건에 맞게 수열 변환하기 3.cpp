#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    if(k % 2 == 0)
    {
        for(int i = 0, end = arr.size(); i < end; i++)
            arr[i] += k;
    }
    else
    {
        for(int i = 0, end = arr.size(); i < end; i++)
            arr[i] *= k;
    }
    
    return arr;
}
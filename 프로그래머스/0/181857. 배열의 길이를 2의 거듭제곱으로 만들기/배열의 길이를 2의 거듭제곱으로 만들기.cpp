#include <string>
#include <vector>

using namespace std;

int nextPowerOfTwo(int n)
{
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    return n + 1;
}

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int size = arr.size();
    int target = nextPowerOfTwo(size);
    for(int i = 0; i < target; i++)
    {
        if(i < size)
            answer.push_back(arr[i]);
        else
            answer.push_back(0);
    }
    
    return answer;
}
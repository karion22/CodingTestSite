#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;
    
    for(int i = idx, end = arr.size(); i < end; i++)
    {
        if(arr[i] == 1){
            answer = i;
            break;
        }
    }
    
    return answer;
}
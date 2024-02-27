#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();
    
    if(arr1Size > arr2Size)
    {
        return 1;
    }
    else if(arr1Size < arr2Size)
    {
        return -1;
    }
    else
    {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < arr1Size; i++)
            sum1 += arr1[i];
        
        for(int i = 0; i < arr2Size; i++)
            sum2 += arr2[i];
        
        if(sum1 > sum2)
            return 1;
        else if(sum1 < sum2)
            return -1;
        else
            return 0;
    }
    
    return answer;
}
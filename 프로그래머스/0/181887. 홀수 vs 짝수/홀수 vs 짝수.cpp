#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    int oddSum = 0, evenSum = 0;
    
    for(int i = 0, end = num_list.size(); i < end; i++)
    {
        if(i % 2 == 0)
            evenSum += num_list[i];
        else
            oddSum += num_list[i];
    }
    
    return (oddSum > evenSum ? oddSum : evenSum);
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    for(int i = 0, end = num_list.size(); i < end; i++)
    {
        if(num_list[i] == n)
            return 1;
    }
    
    return 0;
}
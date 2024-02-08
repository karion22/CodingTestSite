#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {    
    int sum = 0, mul = 1;
    for(int i = 0, end = num_list.size(); i < end; i++)
    {
        sum += num_list[i];
        mul *= num_list[i];
    }
    
    return (pow(sum, 2) > mul);
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    
    int lastValue = num_list.back();
    int prevValue = *(num_list.end() - 2);
    
    if(lastValue > prevValue)
        num_list.push_back(lastValue - prevValue);
    else
        num_list.push_back(lastValue * 2);
    
    return num_list;
}
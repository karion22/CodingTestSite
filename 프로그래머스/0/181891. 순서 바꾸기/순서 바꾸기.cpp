#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    for(int i = n, end = num_list.size(); i < end; i++)
        answer.push_back(num_list[i]);
    
    for(int i = 0; i < n; i++)
        answer.push_back(num_list[i]);
    
    return answer;
}
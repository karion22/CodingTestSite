#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    vector<int> temp;
    for(int i = 0, end = attendance.size(); i < end; i++)
    {
        if(attendance[i])
            temp.push_back(rank[i]);
    }
    
    sort(temp.begin(), temp.end());
    
    int a, b, c;
    for(int i = 0, end = rank.size(); i < end; i++)
    {
        if(rank[i] == temp[0]) a = i;
        else if(rank[i] == temp[1]) b = i;
        else if(rank[i] == temp[2]) c = i;
    }
    
    answer = 10000 * a + 100 * b + c;
    
    return answer;
}
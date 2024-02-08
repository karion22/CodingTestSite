#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd = "", even = "";
    for(int i = 0, end = num_list.size(); i < end; i++)
    {
        if(num_list[i] % 2 == 1)
            odd.append(to_string(num_list[i]));
        else
            even.append(to_string(num_list[i]));
    }
    
    return stoi(odd) + stoi(even);
}
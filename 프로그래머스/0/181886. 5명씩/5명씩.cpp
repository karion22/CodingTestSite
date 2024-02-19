#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    for(int i = 0, end = names.size(); i < end; i += 5)
    {
        if(i % 5 == 0)
            answer.push_back(names[i]);
    }
    return answer;
}
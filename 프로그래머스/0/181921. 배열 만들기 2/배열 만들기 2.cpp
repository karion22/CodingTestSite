#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i <= r; i++)
    {
        if(i % 5 == 0)
        {
            string s = to_string(i);            
            const char* num_char = s.c_str();
            
            bool isComplete = true;
            
            for(int n = 0, end = s.length(); n < end; n++)
            {
                if(num_char[n] != '0' && num_char[n] != '5')
                {
                    isComplete = false;
                    break;
                }
            }
            
            if(isComplete)
                answer.push_back(i);
        }
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}
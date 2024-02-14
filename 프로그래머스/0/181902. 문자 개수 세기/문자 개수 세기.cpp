#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    // 초기화 (대문자와 소문자 사이에 특수 문자가 있다.)
    for(char i = 'A'; i <= 'z'; i++)
    {
        if(i <= 'Z' || i >= 'a') 
            answer.push_back(0);
    }
    
    for(int i = 0, end = my_string.size(); i < end; i++)
    {        
        if(my_string[i] <= 'Z')
            answer[(int)(my_string[i] - 'A')]++;
        else if(my_string[i] >= 'a')
            answer[(int)(my_string[i] - 'A' - 6)]++;
    }
    
    return answer;
}
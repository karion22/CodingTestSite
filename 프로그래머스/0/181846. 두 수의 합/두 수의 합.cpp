#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer;
    
    int lengthA = a.length();
    int lengthB = b.length();
    int maxLength = lengthA > lengthB ? lengthA : lengthB;
    
    int valueA;
    int valueB;
    
    int sum = 0, up = 0;
    for(int i = 1; i <= maxLength; i++)
    {
        if(i <= lengthA)
            valueA = a[lengthA - i] - '0';
        else
            valueA = 0;
        
        if(i <= lengthB)
            valueB = b[lengthB - i] - '0';
        else
            valueB = 0;
        
        sum = valueA + valueB + up;
        up = 0;
        up = sum / 10;
        answer += to_string(sum % 10);
    }
    
    if(up > 0)
        answer += to_string(up);
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int left = stoi(to_string(a) + to_string(b));
    int right = stoi(to_string(b) + to_string(a));
    
    if(left >= right)
        answer = left;
    else
        answer = right;
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    int idx(0), n(0);
    while(n < 10)
    {
        if(numbers[idx] != n)
            answer += n;
        else
            idx++;
        n++;
    }
    return answer;
}
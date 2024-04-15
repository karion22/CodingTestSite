#include <string>
#include <set>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    // 루프를 돌자
    set<int> table;
    for(int i = left; i <= right; i++)
    {
        // 약수를 구하자
        for(int n = i; n > 0; n--)
        {
            if(i % n == 0)
                table.insert(n);
        }
        
        if(table.size() % 2 == 0)
            answer += i;
        else
            answer -= i;
        
        table.clear();
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {    
    vector<int> values;
    values.push_back(a);
    values.push_back(b);
    values.push_back(c);
    values.push_back(d);    
    
    // 정렬하자.
    sort(values.begin(), values.end());
    
    // Case 1 : 모두 같다
    if(values[0] == values[3])
        return 1111 * values[0];
    
    // Case 5 : 모두 다르다
    if(values[0] != values[1] && values[1] != values[2] && values[2] != values[3])
        return values[0];
    
    // Case 2 : 3개씩 같다.
    // Case 2-1 : 0,1,2번째가 같고, 3번째가 다르다.
    if((values[0] == values[1] && values[1] == values[2]))
    {
        return pow((10 * values[0] + values[3]), 2);
    }
    // Case 2-2 : 1,2,3번째가 같고, 0번째가 다르다.
    else if(values[1] == values[2] && values[2] == values[3])
    {
        return pow((10 * values[3] + values[0]), 2);;
    }
    
    // Case 3 : 2개씩 같다.
    if(values[0] == values[1] && values[2] == values[3])
        return (values[0] + values[2]) * abs(values[0] - values[2]);
    
    // Case 4 : 2개는 같고, 나머지는 다르다.
    if(values[0] == values[1])
        return values[2] * values[3];
    
    if(values[1] == values[2])
        return values[0] * values[3];
    
    return values[0] * values[1];
}
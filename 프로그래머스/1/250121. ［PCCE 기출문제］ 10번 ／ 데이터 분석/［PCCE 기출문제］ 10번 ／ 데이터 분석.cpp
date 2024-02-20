#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compareCode(vector<int> a, vector<int> b)
{
    return a[0] < b[0];
}

bool compareDate(vector<int> a, vector<int> b)
{
    return a[1] < b[1];
}

bool compareMaximum(vector<int> a, vector<int> b)
{
    return a[2] < b[2];
}

bool compareRemain(vector<int> a, vector<int> b)
{
    return a[3] < b[3];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    // 인덱스 검색
    int idx = 0;
    if(ext == "code")
        idx = 0;
    else if(ext == "date")
        idx = 1;
    else if(ext == "maximum")
        idx = 2;
    else if(ext == "remain")
        idx = 3;
    else
        return answer;
    
    // 인덱스에 해당하는 값과 입력된 값 비교
    for(int i = 0, end = data.size(); i < end; i++)
    {
        if(data[i][idx] < val_ext)
             answer.push_back(data[i]);
    }
    
    // 정렬 인자 검색
    if(sort_by == "code")
        sort(answer.begin(), answer.end(), compareCode);
    else if(sort_by == "date")
        sort(answer.begin(), answer.end(), compareDate);
    else if(sort_by == "maximum")
        sort(answer.begin(), answer.end(), compareMaximum);
    else if(sort_by == "remain")
        sort(answer.begin(), answer.end(), compareRemain);
    
    return answer;
}
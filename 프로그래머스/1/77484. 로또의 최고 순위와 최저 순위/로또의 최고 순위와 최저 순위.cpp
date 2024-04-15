#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
	int zeroCnt = 0, matchCnt = 0;

	for (const int d : lottos)
	{
		if (d == 0)
			zeroCnt++;
		else
		{
			if (find(win_nums.begin(), win_nums.end(), d) != win_nums.end())
				matchCnt++;
		}
	}	

	if (matchCnt + zeroCnt <= 1)
		answer.push_back(6);
	else
		answer.push_back(7 - (matchCnt + zeroCnt));
    
    if(matchCnt <= 1)
        answer.push_back(6);
    else
        answer.push_back(7 - matchCnt);
    
    return answer;
}
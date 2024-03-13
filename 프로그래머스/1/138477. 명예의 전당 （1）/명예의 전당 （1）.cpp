#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;    
	vector<int> fame;

	for (int i = 0, end = score.size(); i < end; i++)
	{
		if (fame.size() >= k)
		{
			if (score[i] > fame.front())
			{
				fame.erase(fame.begin());
				fame.push_back(score[i]);
			}
		}
		else
			fame.push_back(score[i]);

		sort(fame.begin(), fame.end());
		answer.push_back(fame.front());
	}
    return answer;
}
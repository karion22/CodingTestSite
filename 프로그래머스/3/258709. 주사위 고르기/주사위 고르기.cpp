#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void DFS(int idx, int diceNum, vector<int>& temp, vector<vector<int>>& diceCases)
{
	if (temp.size() == diceNum / 2)
	{
		diceCases.emplace_back(temp);
		return;
	}

	for (int i = idx; i < diceNum; i++)
	{
		temp.emplace_back(i);
		DFS(i + 1, diceNum, temp, diceCases);
		temp.pop_back();
	}
}

void GetSummary(int idx, int& sum, vector<int>& summary, vector<int>& diceCase, vector<vector<int>>& dice)
{
	if (idx == diceCase.size())
	{
		summary.emplace_back(sum);
		return;
	}

	for (int i = 0; i < dice[diceCase[idx]].size(); i++)
	{
		sum += dice[diceCase[idx]][i];
		GetSummary(idx + 1, sum, summary, diceCase, dice);
		sum -= dice[diceCase[idx]][i];
	}
}

vector<int> solution(vector<vector<int>> dice) {
    vector<int> answer;
	vector<vector<int>> diceCases;
	vector<int> temp;

	DFS(0, dice.size(), temp, diceCases);    

	int n = 0, max = -1, total = 0;
	while (n < diceCases.size())
	{
		vector<int> summaryA, summaryB;
		int sumA = 0, sumB = 0, total = 0;

		GetSummary(0, sumA, summaryA, diceCases[n], dice);
		GetSummary(0, sumB, summaryB, diceCases[diceCases.size() - 1 - n], dice);
        
		sort(summaryA.begin(), summaryA.end());
		sort(summaryB.begin(), summaryB.end());        
        
		for (int idx = 0; idx < summaryA.size(); idx++)
		{
			int left = 0, right = summaryB.size() - 1;

			while (left <= right)
			{
				int mid = (left + right) / 2;

				if (summaryA[idx] > summaryB[mid])
                {
					left = mid + 1;                    
                }
				else
                {
					right = mid - 1;                    
                }
			}
			total += left;
		}

		if (total > max)
		{
			max = total;
			answer = diceCases[n];
		}
        
		n++;
	}

	for (int i = 0; i < answer.size(); i++)
    {
		answer[i] += 1;        
    }

    return answer;
}
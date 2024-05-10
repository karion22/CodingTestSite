#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> land) {
    
	int heightSize = land.size();
	int widthSize = land[0].size();

	int answer = 0, sum = 0, value = 0;
	int groupIdx = 2;
	map<int, int> total;
	vector<int> check;
	queue<pair<int, int>> queue;

	for (int w = 0; w < widthSize; w++)
	{
		check.clear();
		sum = 0;

		for (int h = 0; h < heightSize; h++)
		{
			value = land[h][w];
			// 그룹화가 되어 있다.
			if (value > 1)
			{
				if (std::find(check.begin(), check.end(), value) == check.end())
				{
					check.push_back(value);
					sum += total[value];
				}
			}
			else if (value == 1)
			{
				queue.push(make_pair(h, w));
				land[h][w] = groupIdx;
				total[groupIdx]++;

				int hn = 0, wn = 0;
				while (!queue.empty())
				{
					auto temp = queue.front();
					hn = temp.first;
					wn = temp.second;

					queue.pop();

					if (wn > 0 && land[hn][wn - 1] == 1)
					{
						queue.push(make_pair(hn, wn - 1));
						land[hn][wn - 1] = groupIdx;
						total[groupIdx]++;
					}

					if (wn < widthSize - 1 && land[hn][wn + 1] == 1)
					{
						queue.push(make_pair(hn, wn + 1));
						land[hn][wn + 1] = groupIdx;
						total[groupIdx]++;
					}

					if (hn > 0 && land[hn - 1][wn] == 1)
					{
						queue.push(make_pair(hn - 1, wn));
						land[hn - 1][wn] = groupIdx;
						total[groupIdx]++;
					}

					if (hn < heightSize - 1 && land[hn + 1][wn] == 1)
					{
						queue.push(make_pair(hn + 1, wn));
						land[hn + 1][wn] = groupIdx;
						total[groupIdx]++;
					}
				}
				check.push_back(groupIdx);
				sum += total[groupIdx];
				groupIdx++;
			}
		}

		if (answer < sum)
			answer = sum;
	}

    return answer;
}
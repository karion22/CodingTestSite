#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
	string prev;
	bool isExist = false;
    
	for (string s : babbling)
	{
		prev = "";
		isExist = true;

		for (int i = 0, end = s.length(); i < end;)
		{
			string two = s.substr(i, 2);

			if (prev != two)
			{
				if (two == "ye")
				{
					prev = two;
					i += 2;
					continue;
				}
				else if (two == "ma")
				{
					prev = two;
					i += 2;
					continue;
				}
			}

			string three = s.substr(i, 3);
			if (prev != three)
			{
				if (three == "aya")
				{
					prev = three;
					i += 3;
					continue;
				}
				else if (three == "woo")
				{
					prev = three;
					i += 3;
					continue;
				}
			}

			i++;
			isExist = false;
		}

		if (isExist)
			answer++;
	}

    return answer;
}
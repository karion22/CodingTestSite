#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    int answer = 0;
    
	while(s.empty() == false)
	{
		char x = s[0];
		int xCount = 0, otherCount = 0;
		bool isResult = false;

		for(int i = 0, end = s.length(); i < end; i++)
		{
			if (s[i] == x)
				xCount++;
			else
				otherCount++;

			if (xCount == otherCount)
			{
				answer++;
				s = s.substr(i + 1);
				isResult = true;
				break;
			}
		}

		if (isResult == false)
		{
			answer++;
			break;
		}
	}
    
    return answer;
}
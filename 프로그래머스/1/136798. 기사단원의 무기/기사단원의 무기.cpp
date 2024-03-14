#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
	int divisor = 0;
	for (int i = 1; i <= number; i++)
	{
		divisor = 1;
		// 1은 기본, 약수 개수를 구한다.
		for (int n = 1, end = i / 2; n <= end; n++)
		{
			if (i % n == 0)
				divisor++;
		}

		if (divisor > limit)
			answer += power;
		else
			answer += divisor;
	}

    return answer;
}
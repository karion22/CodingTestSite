#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
	// 오름 차순 (굳이 내림 차순으로 다시 하진 말자)
	sort(score.begin(), score.end());

	// 역순으로 계산할 것
	for (int i = score.size() - 1; i >= (m - 1); i -= m)
	{
		answer += (score[i - m + 1] * m);
	}
    return answer;
}
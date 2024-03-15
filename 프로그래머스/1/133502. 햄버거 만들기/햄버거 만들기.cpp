#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    
	int idx = 0;
	while(idx < ingredient.size() && ingredient.size() >= 4)
	{
		if (ingredient[idx] == 1 && ingredient[idx + 1] == 2 && ingredient[idx + 2] == 3 && ingredient[idx + 3] == 1)
		{
			ingredient.erase(ingredient.begin() + idx, ingredient.begin() + idx + 4);
			answer++;
			idx = idx > 4 ? idx - 4 : 0;
		}
		else
			idx++;
	}

    return answer;
}
#include <string>
#include <vector>
#include <set>

using namespace std;

bool CheckNextRound(int target, set<int>& cards, set<int>& matching)
{
	for (int card : cards)
	{
		int matchingCard = target - card;

		if (matching.find(matchingCard) != matching.end())
		{
			cards.erase(card);
			matching.erase(matchingCard);
			return true;
		}
	}
	return false;
}

int solution(int coin, vector<int> cards) {
    int answer = 1;
    int cardSize = cards.size();
    int targetValue = cardSize + 1;
    int firstSize = cardSize / 3;

    set<int> hands, draw;
    for (int i = 0; i < firstSize; i++)
        hands.insert(cards[i]);

    int idx = firstSize;
    while (idx < cardSize)
    {
        for (int i = 0; i < 2; i++)
        {
            draw.insert(cards[idx++]);            
        }

        if (hands.size() >= 2 && CheckNextRound(targetValue, hands, hands))
        {
            answer++;            
        }
        else if (hands.size() >= 1 && coin >= 1 && CheckNextRound(targetValue, hands, draw))
        {
            answer++;
            coin--;
        }
        else if (coin >= 2 && CheckNextRound(targetValue, draw, draw))
        {
            answer++;
            coin -= 2;
        }
        else
            break;
    }
    return answer;
}
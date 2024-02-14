#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

struct sTable
{
	int giftPoint;
	int nextPoint;
	unordered_map<string, int> mapTable;
};

int solution(vector<string> friends, vector<string> gifts) {   
    unordered_map<string, sTable> giftTable;

    // 친구들의 선물 주고받은 횟수 계산
    for (const string& gift : gifts) {
        istringstream iss(gift);
        string sender, receiver;
        iss >> sender >> receiver;

		giftTable[sender].giftPoint++;
		giftTable[sender].mapTable[receiver]++;

		giftTable[receiver].giftPoint--;
		giftTable[receiver].mapTable[sender]--;
    }

    // 계산하기
	for (int i = 0, end = friends.size(); i < end - 1; i++)
	{
		for (int j = i + 1; j < end; j++)
		{
			if (giftTable[friends[i]].mapTable[friends[j]] == 0)
			{
				if (giftTable[friends[i]].giftPoint > giftTable[friends[j]].giftPoint)
					giftTable[friends[i]].nextPoint++;
				else if(giftTable[friends[i]].giftPoint < giftTable[friends[j]].giftPoint)
					giftTable[friends[j]].nextPoint++;
			}
			else if (giftTable[friends[i]].mapTable[friends[j]] > 0)
				giftTable[friends[i]].nextPoint++;
			else
				giftTable[friends[j]].nextPoint++;
		}
	}

    // 최대값 찾기
	int nMaxVaule = 0;
	for (auto iter = giftTable.begin(); iter != giftTable.end(); iter++)
	{
		if (iter->second.nextPoint > nMaxVaule)
			nMaxVaule = iter->second.nextPoint;
	}

    // 다음 달에 가장 많은 선물을 받을 친구의 선물 수 반환
    return nMaxVaule;
}
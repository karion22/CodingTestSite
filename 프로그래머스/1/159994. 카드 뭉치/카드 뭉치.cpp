#include <string>
#include <vector>

using namespace std;



string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer;
    int goalIdx = 0, card1Idx = 0, card2Idx = 0;
    int goalSize = goal.size(), card1Size = cards1.size(), card2Size = cards2.size();
    bool isChecked = false;
    
    while (true)
    {
        isChecked = false;
        
        if (card1Idx < card1Size)
        {
            if (cards1[card1Idx] == goal[goalIdx])
            {
                isChecked = true;
                goalIdx++;
                card1Idx++;
            }
        }
        
        if (card2Idx < card2Size)
        {
            if (cards2[card2Idx] == goal[goalIdx])
            {
                isChecked = true;
                goalIdx++;
                card2Idx++;
            }
        }
        
        if(goalIdx >= goalSize)
        {
            answer = "Yes";
            break;
        }
        
        if(isChecked == false)
        {
            answer = "No";
            break;
        }
        
        if(card1Idx >= card1Size && card2Idx >= card2Size)
        {
            answer = "No";
            break;
        }
    }
    return answer;
}
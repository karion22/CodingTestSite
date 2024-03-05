#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    int hn, wn = 0;
    string str, temp;
    
    for(int h = 0, endHeight = picture.size(); h < endHeight; h++)
    {
        str = picture[h];
        
        for(int hn = 0; hn < k; hn++)
        {
            temp = "";
            
            for(int w = 0, endWidth = str.length(); w < endWidth; w++)
            {
                for(int wn = 0; wn < k; wn++)
                {
                    temp += str[w];                    
                }
            }         
            answer.push_back(temp);
        }
    }
    
    return answer;
}
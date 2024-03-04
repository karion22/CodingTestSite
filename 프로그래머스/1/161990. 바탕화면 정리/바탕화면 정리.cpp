#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int sx = INT_MAX, sy = INT_MAX;
    int ex = INT_MIN, ey = INT_MIN;
    
    int maxHeight = wallpaper.size();
    int maxWidth = wallpaper[0].size();
    
    for(int h = 0; h < maxHeight; h++)
    {
        for(int w = 0; w < maxWidth; w++)
        {
            if(wallpaper[h][w] == '#')
            {
                if(sx > w)
                    sx = w;
                if(sy > h)
                    sy = h;
                
                if(ex <= w)
                {
                    if(w + 1 <= maxWidth)
                        ex = w + 1;
                    else
                        ex = w;
                }
                if(ey <= h)
                {
                    if(h + 1 <= maxHeight)
                        ey = h + 1;
                    else
                        ey = h;
                }
            }
        }
    }
    
    answer.push_back(sy);
    answer.push_back(sx);
    answer.push_back(ey);
    answer.push_back(ex);
    return answer;
}
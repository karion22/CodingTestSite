#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    // 시작 지점 찾기
    int sx, sy;
    int width = park[0].length(), height = park.size();

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            if (park[h][w] == 'S')
            {
                sx = w;
                sy = h;
                break;
            }
        }
    }

    // 탐색 시작
    char dir;
    int count;
    int px, py;
    bool isBlock = false;

    for (int i = 0, end = routes.size(); i < end; i++)
    {
        // 방향과 개수 파악
        stringstream ss(routes[i]);
        ss >> dir >> count;
        isBlock = false;
        
        px = sx;
        py = sy;

        while(count-- && !isBlock)
        {
            // 지시된 방향과 개수대로 한 칸씩 검색
            switch (dir)
            {
                case 'E':
                {
                    if (px >= width - 1 || park[py][px + 1] == 'X')
                        isBlock = true;
                    else
                        px++;
                }
                    break;

                case 'W':
                {
                    if (px <= 0 || park[py][px - 1] == 'X')
                        isBlock = true;
                    else
                        px--;
                }
                    break;

                case 'S':
                {
                    if (py >= height - 1 || park[py + 1][px] == 'X')
                        isBlock = true;
                    else
                        py++;
                }
                    break;

                case 'N':
                {
                    if (py <= 0 || park[py - 1][px] == 'X')
                        isBlock = true;
                    else
                        py--;
                }
                    break;
            }            
        }
        
        if(isBlock == false)
        {
            sx = px;
            sy = py;
        }
    }
    
    answer.push_back(sy);
    answer.push_back(sx);
    return answer;
}
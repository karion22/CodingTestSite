#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {    
    int w = 0, h = 0;
    int sw = 0, sh = 0;
    for(int i = 0, end = sizes.size(); i < end; i++)
    {        
        sw = sizes[i][0];
        sh = sizes[i][1];
        
        if(sw > sh)
        {
            if(w < sw) w = sw;            
            if(h < sh) h = sh;
        }
        else
        {
            if(w < sh) w = sh;
            if(h < sw) h = sw;
        }
    }
    
    return w * h;
}
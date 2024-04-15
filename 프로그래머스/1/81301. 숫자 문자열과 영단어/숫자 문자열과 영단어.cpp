#include <string>
#include <map>

using namespace std;

int solution(string s) {
    map<string, int> alphabets {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}};
    
    string temp = "", stack = "";
    for(const char& c : s)
    {
        if(isdigit(c))
            temp += c;
        else
        {
            stack += c;
            
            if(stack.length() >= 3)
            {
                if(alphabets.find(stack) != alphabets.end())
                {
                    temp += to_string(alphabets[stack]);
                    stack = "";
                }
            }
        }
    }
    return stoi(temp);
}
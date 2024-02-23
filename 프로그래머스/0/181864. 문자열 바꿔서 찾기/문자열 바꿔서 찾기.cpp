#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    
    for(int i = 0, end = myString.length(); i < end; i++)
    {
        if(myString[i] == 'A')
            myString[i] = 'B';
        else
            myString[i] = 'A';
    }
    
    for(int i = 0, end = myString.length() - pat.length(); i <= end; i++)
    {
        if(myString.substr(i, pat.length()) == pat)
            return 1;
    }
    return 0;
}
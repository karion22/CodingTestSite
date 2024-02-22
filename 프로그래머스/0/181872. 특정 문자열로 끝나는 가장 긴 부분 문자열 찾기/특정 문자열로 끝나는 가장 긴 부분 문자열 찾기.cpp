#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    auto spos = myString.find_last_of(pat);    
    return myString.substr(0, spos + 1);
}
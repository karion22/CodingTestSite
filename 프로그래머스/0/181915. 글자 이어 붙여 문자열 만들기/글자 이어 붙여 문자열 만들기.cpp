#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    
    // To Char Array
    const char* arr = my_string.c_str();
    
    for(auto value : index_list)
    {
        answer += arr[value];
    }
    return answer;
}
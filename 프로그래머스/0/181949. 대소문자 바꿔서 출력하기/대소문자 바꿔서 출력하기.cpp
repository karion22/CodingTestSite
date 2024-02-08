#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i = 0, end = str.length(); i < end; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            cout << static_cast<char>(str[i] + 32);
        else
            cout << static_cast<char>(str[i] - 32);
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i = 0, end = str.length(); i < end; i++)
        cout << str[i] << endl;

    return 0;
}
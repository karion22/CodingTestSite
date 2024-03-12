#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    map<string, int> termMap;
    
    // Map 구성
    for(const string& s : terms)
    {
        stringstream ss(s);
        string type;
        int period;
        ss >> type >> period;
        termMap[type] = period;
    }
    
    // 오늘 날짜 분리
	int todayYear = 0, todayMonth = 0, todayDay = 0;
	{
		stringstream ss(today);
		string tokken;
		getline(ss, tokken, '.');
		todayYear = stoi(tokken);
		getline(ss, tokken, '.');
		todayMonth = stoi(tokken);
		getline(ss, tokken, '.');
		todayDay = stoi(tokken);
	}

	int customYear = 0, customMonth = 0, customDay = 0;
	string customType;

	for (int i = 0, end = privacies.size(); i < end; i++)
	{
		stringstream ss(privacies[i]);
		string tokken;

		getline(ss, tokken, '.');
		customYear = stoi(tokken);
		getline(ss, tokken, '.');
		customMonth = stoi(tokken);
		getline(ss, tokken, ' ');
		customDay = stoi(tokken);
		getline(ss, customType, ' ');

		int diffYear = todayYear - customYear;
		int diffMonth = (diffYear * 12) + todayMonth - customMonth;
		int diffDay = (diffMonth * 28) + todayDay - customDay;

		int convertMonth = diffDay / 28;

		if (convertMonth >= termMap[customType])
			answer.push_back(i + 1);
	}
    
    return answer;
}
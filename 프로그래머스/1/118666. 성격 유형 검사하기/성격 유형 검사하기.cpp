#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";    
	map<char, int> table;
	int value;

	for (int i = 0, end = survey.size(); i < end; i++)
	{
		value = choices[i];

		if (value > 4)
			table[survey[i][1]] += (value - 4);
		else if (value < 4)
			table[survey[i][0]] += (4 - value);
	}

	if (table['R'] >= table['T'])
		answer.push_back('R');
	else
		answer.push_back('T');

	if (table['C'] >= table['F'])
		answer.push_back('C');
	else
		answer.push_back('F');

	if (table['J'] >= table['M'])
		answer.push_back('J');
	else
		answer.push_back('M');

	if (table['A'] >= table['N'])
		answer.push_back('A');
	else
		answer.push_back('N');

    return answer;
}
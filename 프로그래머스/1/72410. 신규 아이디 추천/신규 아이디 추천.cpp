#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";

	for (int i = 0, end = new_id.length(); i < end; i++)
	{
		// Step 1 : 대문자 -> 소문자
		new_id[i] = tolower(new_id[i]);

		// Step 2 : 알파벳 소문자, 숫자, 특정기호(-, _, .) 제외 제거
		if (isdigit(new_id[i]) || isalpha(new_id[i]) || new_id[i] == '-' || new_id[i] == '_' || (new_id[i] == '.' && answer[answer.size() - 1] != '.'))
			answer += new_id[i];
	}

    // 처음과 끝에 있다면 제거
    if(answer.length() > 0)
    {
        if (answer[0] == '.')
        {
            if(answer.size() > 1)
                answer = answer.substr(1, answer.size());
            else
                answer = "";
        }

        if (answer[answer.size() - 1] == '.')
        {
            if(answer.size() > 1)
                answer = answer.substr(0, answer.size() - 1);   
            else
                answer = "";
        }        
    }

    // 빈 문자열이면 a 대입
	if (answer.empty())
		answer.push_back('a');

    // 16자 이상이면 15개 제외 나머지 문자 제거.
	if (answer.length() >= 16)
	{
		answer = answer.substr(0, 15);

        // 마지막에 마침표면 제거
		if (answer[answer.size() - 1] == '.')
			answer = answer.substr(0, answer.size() - 1);
	}    

    // 2자 이하라면 3이 될때까지 반복
	if (answer.size() < 3)
	{
		for (int i = answer.size(); i < 3; i++)
			answer.push_back(answer[i - 1]);
	}
    return answer;
}
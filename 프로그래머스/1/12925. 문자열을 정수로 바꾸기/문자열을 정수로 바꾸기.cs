public class Solution {
    public int solution(string s) {
        int answer = 0;
        if (char.IsDigit(s[0]) == false)
        {
            if (s[0] == '+')
                answer = int.Parse(s.Substring(1, s.Length - 1));
            else
                answer = -1 * int.Parse(s.Substring(1, s.Length - 1));
        }
        else
            answer = int.Parse(s);
        return answer;
    }
}
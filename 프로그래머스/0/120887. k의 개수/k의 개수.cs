using System;
using System.Linq;

public class Solution {
    public int solution(int i, int j, int k) {

            int answer = 0;
            char ch = (char)(k + '0');
            for (int start = i; start <= j; start++)
                answer += (start.ToString().Count(x => x == ch));
            return answer;
    }
}
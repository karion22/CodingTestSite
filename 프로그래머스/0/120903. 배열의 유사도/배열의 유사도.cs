using System;

public class Solution {
    public int solution(string[] s1, string[] s2) {
            int answer = 0;

            foreach(var a1 in s1)
            {
                foreach(var a2 in s2)
                {
                    if(a1.Equals(a2)) answer++;
                }
            }

            return answer;
    }
}
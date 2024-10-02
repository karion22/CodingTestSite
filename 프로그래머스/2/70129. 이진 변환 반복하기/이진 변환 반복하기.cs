using System;
using System.Text;

public class Solution {
    public int[] solution(string s) {
        
            int[] answer = new int[2];

            StringBuilder sb = new StringBuilder();

            while (s.Length > 1)
            {
                int prevLen = s.Length;

                s = s.Replace("0", "");

                answer[0]++;
                answer[1] += prevLen - s.Length;

                s = Convert.ToString(s.Length, 2);
            }

            return answer;
    }
}
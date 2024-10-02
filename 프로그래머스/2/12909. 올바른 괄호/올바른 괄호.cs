using System;

public class Solution {
    public bool solution(string s) {        
            int collect = 0, cnt = s.Length, idx = 0;
            bool isStart = false;

            for(int i = 0; i < cnt; i++)
            {
                if (s[i] == '(')
                {
                    idx++;
                    isStart = true;
                }
                else if (s[i] == ')')
                {
                    if (isStart == false) return false;

                    if (idx > 0)
                    {
                        collect++;
                        idx--;
                    }
                }
            }

            return (collect == (cnt + 1) / 2);
    }
}
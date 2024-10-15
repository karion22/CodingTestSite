using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        for(int i = 4; i <= n; i++)
        {
            int left = 1, right = i, cnt = 0;
            while (left < right)
            {
                if (i % left == 0)
                {
                    cnt++;
                    int div = i / left;
                    if (div != left)
                    {
                        cnt++;
                        right = div;
                    }
                }

                left++;
            }
            
            if(cnt >= 3)
                answer++;
        }
        return answer;
    }
}
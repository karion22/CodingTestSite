using System;

public class Solution {
    public int solution(int order) {
        int answer = 0;
        
        var str = order.ToString();
        foreach(var c in str)
        {
            switch(c)
            {
                case '3':
                case '6':
                case '9':
                    answer++;
                    break;
            }
        }
        return answer;
    }
}
using System;

public class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = new int[2];
        
        foreach(var n in num_list)
        {
            if(n % 2 == 0)
                answer[0]++;
            else
                answer[1]++;
        }
        
        return answer;
    }
}
using System;
//using System.Linq;

public class Solution {
    public int solution(int num, int k) {
        var answer = num.ToString().IndexOf((char)(k + '0'));
        return answer < 0 ? -1 : answer + 1;
    }
}
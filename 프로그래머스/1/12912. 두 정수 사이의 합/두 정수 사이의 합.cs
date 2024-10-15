using System;
public class Solution {
    public long solution(int a, int b) {
            int cnt = Math.Abs(b - a) + 1;
            int div = cnt / 2;

            if (cnt % 2 == 0)
                return (long)(a + b) * div;
            else
                return (long)(a + b) * div + ((a + b) / 2);
    }
}
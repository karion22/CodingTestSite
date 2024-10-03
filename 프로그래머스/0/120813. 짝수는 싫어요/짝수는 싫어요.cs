using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n) {
        List<int> res = new List<int>();
        for(int i = 1; i <= n; i += 2)
            res.Add(i);
        return res.ToArray();
    }
}
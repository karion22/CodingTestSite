using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string my_string) {
        List<int> res = new List<int>();
        
        foreach(var c in my_string)
        {
            if(char.IsDigit(c))
                res.Add(c - '0');
        }
        
        res.Sort();
        return res.ToArray();
    }
}
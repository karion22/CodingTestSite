using System;
using System.Linq;

public class Solution {
    public long solution(long n) {        
            var arr = n.ToString().ToArray();
            Array.Sort(arr);
            Array.Reverse(arr);
            return long.Parse(new string(arr));
    }
}
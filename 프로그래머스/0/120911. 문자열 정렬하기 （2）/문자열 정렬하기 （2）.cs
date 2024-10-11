using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public class Solution {
    public string solution(string my_string) {
        
            var answer = my_string.ToLower().ToArray();
            Array.Sort(answer);
            return new string(answer);
    }
}
using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public string solution(string[] seoul) {
            return string.Format("김서방은 {0}에 있다", Array.FindIndex(seoul, x => x == "Kim"));
    }
}
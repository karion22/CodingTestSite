using System;
using System.Text;

public class Solution {
    public string solution(int age) {
        
            StringBuilder sb = new StringBuilder();
            foreach(var c in age.ToString())
            {
                sb.Append((char)('a' + (c - '0')));
            }

            return sb.ToString();
    }
}
using System;
using System.Linq;

public class Solution {
    public string solution(string my_string, int num1, int num2) {
        char[] chArray = my_string.ToArray();
        
        char temp = chArray[num1];
        chArray[num1] = chArray[num2];
        chArray[num2] = temp;
        
        return new string(chArray);
    }
}
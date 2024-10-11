using System;
using System.Text;

public class Solution {
    public string solution(string cipher, int code) {
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < cipher.Length; i++)
            {
                if (i % code == (code - 1))
                    sb.Append(cipher[i]);
            }
            return sb.ToString();
    }
}
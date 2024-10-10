using System;
using System.Text;
public class Solution {
    public string solution(string my_string) {
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < my_string.Length; i++)
            {
                switch(my_string[i])
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                        break;

                    default:
                        sb.Append(my_string[i]);
                        break;
                }
            }

            return sb.ToString();
    }
}
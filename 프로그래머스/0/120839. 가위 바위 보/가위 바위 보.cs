using System;
using System.Text;

public class Solution {
    public string solution(string rsp) {
        
            StringBuilder sb = new StringBuilder();

            foreach (var c in rsp)
            {
                switch(c)
                {
                    case '2':
                        sb.Append('0');
                        break;

                    case '0':
                        sb.Append('5');
                        break;

                    case '5':
                        sb.Append('2');
                        break;
                }
            }

            return sb.ToString();
    }
}
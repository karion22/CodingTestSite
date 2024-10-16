using System;
using System.Text;

public class Solution {
    public string solution(string letter) {
        
            string[] mosSign = new string[] { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

            var texts = letter.Split(' ');
            StringBuilder sb = new StringBuilder();
            foreach(var text in texts)
            {
                sb.Append((char)(Array.FindIndex(mosSign, x => text == x) + 'a'));
            }
            return sb.ToString();
    }
}
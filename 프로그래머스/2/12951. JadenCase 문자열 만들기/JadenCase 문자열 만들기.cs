public class Solution {
    public string solution(string s) {
            string[] words = s.Split(' ');

            for (int i = 0; i < words.Length; i++)
            {
                if (words[i].Length > 0)
                {
                    char firstChar = words[i][0];
                    string rest = words[i].Length > 1 ? words[i].Substring(1).ToLower() : "";
                    words[i] = char.ToUpper(firstChar) + rest;
                }
            }

            return string.Join(" ", words);
    }
}
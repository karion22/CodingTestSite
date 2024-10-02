using System;
public class Solution {
    public string solution(string s) {
            int min = int.MaxValue, max = int.MinValue;
            var values = s.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            foreach (var v in values)
            {
                min = Math.Min(min, int.Parse(v));
                max = Math.Max(max, int.Parse(v));
            }

            return $"{min} {max}";
    }
}
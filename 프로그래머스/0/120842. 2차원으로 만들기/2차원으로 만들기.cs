using System;
using System.Linq;

public class Solution {
    public int[,] solution(int[] num_list, int n) {
        
            var res = num_list
                .Select((value, index) => new { value, index })
                .GroupBy(x => x.index / n)
                .Select(group => group.Select(x => x.value).ToArray())
                .ToArray();

            int[,] answer = new int[num_list.Length / n, n];
            for (int h = 0; h < res.Length; h++)
            {
                for(int w = 0; w < res[h].Length; w++)
                {
                    answer[h, w] = res[h][w];
                }
            }
            return answer;
    }
}
using System.Linq;
public class Solution {
    public int[] solution(int[] arr) {

            int min = arr.Min();
            var res = arr.Where(x => x != min).ToArray();            
            return res.Length <= 0 ? arr = new[] { -1 }:res;
    }
}
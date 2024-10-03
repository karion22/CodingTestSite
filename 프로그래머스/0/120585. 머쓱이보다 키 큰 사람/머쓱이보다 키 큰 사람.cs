using System;
using System.Linq;

public class Solution {
    public int solution(int[] array, int height) {
        return array.Count(v => v > height);
    }
}
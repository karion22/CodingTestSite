using System;
using System.Linq;

public class Solution {
    public int solution(int[] array, int n) {
        return array.Count(v => v == n);;
    }
}
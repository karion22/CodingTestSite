using System;
using System.Linq;

public class Solution {
    public int solution(int n) {
        return n.ToString().Sum(x => x - '0');
    }
}
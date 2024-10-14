public class Solution {
    public bool solution(int x) {        
        
            int temp = 0;
            foreach (var c in x.ToString())
                temp += (int)c - '0';
            return x % temp == 0;
    }
}
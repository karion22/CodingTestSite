public class Solution {
    public long solution(long n) 
    {        
        long left = 1, right = n;        
        
        while (left <= right)
        {
            if (n % left == 0)
            {
                long div = n / left;
                if (div != left)
                {
                    right = div;                    
                }
                else
                {
                    return (div + 1) * (div + 1);
                }
            }
            left++;
        }
        return -1;
    }
}
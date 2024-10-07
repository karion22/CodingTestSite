using System;
using System.Collections.Generic;

public class Solution {    
    
    public int[] solution(int n) {
            
            List<int> res = new List<int>();

            int left = 1, right = n;

        if(left == right)
            res.Add(left);
        else
        {
            
            while(left < right)
            {
                if (n % left == 0)
                {
                    res.Add(left);

                    int div = n / left;
                    if (div != left)
                    {
                        res.Add(div);
                        right = div;
                    }
                }

                left++;
            }
            res.Sort();
        }
            return res.ToArray();
    }
}
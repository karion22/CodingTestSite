using System;
using System.Collections.Generic;

public class Solution {
    
        private int[] GetMeasureValues(int inValue, out bool hasSquare)
        {
            List<int> res = new List<int>();

            int half = inValue / 2;
            hasSquare = false;

            for(int i = 1; i < half; i++)
            {
                if(inValue % i == 0)
                {
                    res.Add(i);

                    int div = inValue / i;
                    if (div != i)
                        res.Add(div);
                    else
                        hasSquare = true;
                }
            }

            res.Sort();
            return res.ToArray();
        }
    
    public int solution(int n) {  
        
            bool hasSquare = false;

            GetMeasureValues(n, out hasSquare);

            return hasSquare ? 1 : 2;
    }
}
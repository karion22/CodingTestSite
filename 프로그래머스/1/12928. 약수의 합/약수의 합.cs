public class Solution {
    
    public int solution(int n) {
        
        int answer = 0;
            int left = 1, right = n;

            if (left == right)
                answer = left;
            else
            {
                while (left < right)
                {
                    if (n % left == 0)
                    {
                        answer += left;

                        int div = n / left;
                        if (div != left)
                        {
                            answer += div;
                            right = div;
                        }
                    }

                    left++;
                }
            }

            return answer;
    }
}
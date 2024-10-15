public class Solution {
    public int solution(int num) {
        int answer = 0;
        
        long parameter = num;
        while(answer <= 500)
        {
            if(parameter == 1)
                return answer;
            
            if(parameter % 2 == 0)
                parameter /= 2;
            else
                parameter = parameter * 3 + 1;
            
            answer++;
        }
        
        return -1;
    }
}
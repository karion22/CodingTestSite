#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer(0);
	int newCoke(0);

	while (n >= a)
	{
		newCoke = (n / a) * b;
		
		answer += newCoke;
		n = newCoke + (n % a);
	}
    
    return answer;
}
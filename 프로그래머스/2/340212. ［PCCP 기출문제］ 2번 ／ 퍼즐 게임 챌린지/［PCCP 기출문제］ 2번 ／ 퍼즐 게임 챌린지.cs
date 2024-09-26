using System;

public class Solution {
    public int solution(int[] diffs, int[] times, long limit) {
        return BinarySearch(diffs, times, limit);
    }
    
	public int BinarySearch(int[] inDiffs, int[] inTimes, long inLimit)
	{
		int left = 1;
		int right = int.MaxValue;
		int mid = 0;

		while(left <= right)
		{
			mid = left + (right - left) / 2;

			if(CheckSuccess(inDiffs, inTimes, inLimit, mid))
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}

		return left;
	}

	public bool CheckSuccess(int[] inDiffs, int[] inTimes, long inLimit, int inLevel)
	{
		long sum = 0;

		for(int i = 0; i < inDiffs.Length; i++)
		{
			if (inDiffs[i] <= inLevel)
			{
				sum += inTimes[i];
			}
			else
			{
				sum += (inTimes[i] + inTimes[i - 1]) * (inDiffs[i] - inLevel) + inTimes[i];
			}
		}

		return (sum <= inLimit);
	}
}
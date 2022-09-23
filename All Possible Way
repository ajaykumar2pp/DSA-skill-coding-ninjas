code  in java 
*************************************************
public class Solution {

    static int countWaysUtil(int x, int n, int num)
	{
		int val = (int) (x - Math.pow(num, n));
		if (val == 0)
			return 1;
		if (val < 0)
			return 0;	
		return countWaysUtil(val, n, num + 1) +
			countWaysUtil(x, n, num + 1);
	}
    
    public static int allWays(int x, int n) {
      
        return countWaysUtil(x, n, 1);
        

    }
}

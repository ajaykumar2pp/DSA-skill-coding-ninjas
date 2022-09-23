Binary Sum
Ninja is playing with Binary Strings at his Granny’s house. Granny is always encouraging Ninja to practice math. So she has given him two binary strings. He has to return their sum as a binary string. Can you do it for Ninja?
Input Format:
First line of input contains an integer t, representing the number of test cases.
First line of input of each test case contains the first binary string.
Second line of input each test case contains the second binary string.
Constraints:
1 <= t <= 100
1 <= length of each string <= 10000
Time Limit: 1 second
Output Format:
For each query, you have to print the sum of the two given binary strings as a binary string.
Sample Input 1:
1
1010001
1101
Sample Output 1:
1011110
Sample Input 2:
2
11001100
10
10000001
111101
Sample Output 2:
11001110
10111110

//////////////////////////////                         code in  java    /////////////////////////////

import java.util.*;
public class Solution
{
  public static void main (String[]args) throws Exception
  {

    long b1, b2;
    int i = 0, carry = 0;
    int[] sum = new int[10];
    Scanner sc = new Scanner (System.in);
    int t= sc.nextInt();
    for( int k=0;k<t;k++)
    {
      b1 = sc.nextLong ();
     
      b2 = sc.nextLong ();
      // sc.close ();
    while (b1 != 0 || b2 != 0)
      {
	sum[i++] = (int) ((b1 % 10 + b2 % 10 + carry) % 2);
	carry = (int) ((b1 % 10 + b2 % 10 + carry) / 2);
	b1 = b1 / 10;
	b2 = b2 / 10;
      }
    if (carry != 0)
      {
	sum[i++] = carry;
      }
    --i;
 
    while (i >= 0)
      {
	System.out.print (sum[i--]);
      }
    System.out.print ("\n");
    }
  }
}

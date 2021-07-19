class Solution {
    public int climbStairs(int n) {
         int result=n,one=1,two=2;
   for(int i=3;i<=n;i++)
   {
       result=one+two;
       one = two;
       two = result;
   }
   return result;
    }
}

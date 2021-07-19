class Solution {
    public int[] plusOne(int[] digits) {
        for(int i=digits.length-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            // if digit is 9 at any place other than single digit.
            digits[i]=0;
        }
        int[] result=new int[digits.length+1];
        // for single digit 9 it should make 10.
        result[0]=1;
        return result;
    }
}

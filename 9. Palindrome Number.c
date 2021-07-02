9. Palindrome Number
Easy

3519

1774

Add to List

Share
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

 

Example 1:

Input: x = 121
Output: true
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Example 4:

Input: x = -101
Output: false
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
  
  
  
   										SOLUTION--------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
											
	
	
	

bool isPalindrome(int x){
    int num,rem;
    long int rev=0;
    if(x==0)
        return true;
    else if(x<0)
        return false;
    else if(x%10==0)
        return false;
    else
    {
        num=x;
        while(num!=0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        if(rev==x)
            return true;
        else
            return false;
    }
        

}


  
  
  
  

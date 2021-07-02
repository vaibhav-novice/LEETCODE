Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
Example 4:

Input: x = 0
Output: 0
 

Constraints:

-231 <= x <= 231 - 1









SOLUTION:::-----



int reverse(int x){
  int rem;
    long int rev=0;
    // if(x==0||(x>964632435 && x<-964632435))
    //     return 0;
    // -123
      //if(x<0 && x>-2147483648)
    if(x==0)
        return 0;
    
    else if(x<0)
    {
         while(x!=0)
         {
           rem=x%10;
           rev=rev*10+rem; 
           x/=10;
         }
       if (rev>2147483647 || rev<-2147483648)
                return 0;
              else 
            return rev;       
    }
    // 120
  //  else if(x%10==0&& x<964632435)
    else if(x%10==0)
    {
        x=x/10;
        while(x!=0)
        {
           rem=x%10;
           rev=rev*10+rem; 
           x/=10;
        }
        return rev;
    }
 //           1534236469        9646324350   
    //else if(x<2147483647 && x>-(2147483648))
        else
            
    {
        
        while(x!=0)
        {     //  964632435          0534236569
//             if (x>21474836 && x<(-21474836))
//              {
//             break;
            
//             }
           rem=x%10;
          
        
           rev=rev*10+rem; 
     
           x/=10;
        
         } 
             if (rev>2147483647 || rev<-2147483648)
                return 0;
              else 
            return rev;
    }
    
   // if (rev>2147483647 || rev<-2147483648||x==0)
   //     return 0;
   //    else
   //  return rev;
   
    // return 0;
 

}

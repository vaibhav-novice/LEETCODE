

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *res=(int *)malloc(2*sizeof(int)) ;
int first=0,last=numbersSize-1;
    while(first<last)
    {
        if(numbers[first]+numbers[last]<target)
            first++;
         else if(numbers[first]+numbers[last]>target)
           last--;
         else if(numbers[first]+numbers[last]==target)
         {
             res[0]=first+1;
             res[1]=last+1;
             break;
         }
    }
    *returnSize=2;
    return res;
}

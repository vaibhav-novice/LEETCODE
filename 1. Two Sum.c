/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    * returnSize=2;
    int *returnArr=(int*)malloc((*returnSize)*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                returnArr[0]=i;
                returnArr[1]=j;
                return returnArr;
            }
        }
    }
    // if target is not found
    returnArr[0]=-1;
    returnArr[1]=-1;
    return returnArr;
}










// output:-
      Runtime: 80 ms, faster than 48.62% of C online submissions for Two Sum.
Memory Usage: 6.6 MB, less than 19.73% of C online submissions for Two Sum.

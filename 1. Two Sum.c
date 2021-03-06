QUESTION:- 1. Two Sum
Easy

21970

745

Add to List

Share
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
Accepted
4,447,019
Submissions
9,431,469
   
   
   
            //    SOLUTUON

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

class Solution {
    public int singleNumber(int[] nums) {
         Set<Integer> s = new HashSet<>();
    for (int i = 0; i < nums.length; i++)
            if (!s.add(nums[i])) s.remove(nums[i]);
    return s.iterator().next();
    }
}

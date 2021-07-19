class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        //start from the end of both arrays.
        int i=m-1;
        int j=n-1;
        int count=m+n-1;
        while(i>=0 || j>=0) {
            if(i>=0 && j>=0) {
                if(nums1[i]>nums2[j]) {
                    nums1[count]= nums1[i];
                    count--;
                    i--;
                }            
                else {
                    nums1[count] = nums2[j];
                    count--;
                    j--;
                }
            }
            else {
                while(j>=0) {
                    nums1[count] = nums2[j];
                    count--;
                    j--;
                }
                while(i>=0) {
                    nums1[count] = nums1[i];
                    count--;
                    i--;
                }
            }
        }
    }
}

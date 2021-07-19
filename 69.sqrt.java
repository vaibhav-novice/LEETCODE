class Solution {
    public int mySqrt(int x) {
        int low = 0;
        int high = x/2;
        int ans = 0;
        if( x == 1 ) {
            return 1;
        }
        while(low<=high) {
            long mid = low + (high-low)/2;
            if( mid * mid < x ) {
                ans = (int) mid;
                low = (int)mid + 1;
            } else if( mid * mid > x ) {
                high = (int)mid - 1;
            } else {
                return (int)mid;
            }
        }
        return ans;
    }
}

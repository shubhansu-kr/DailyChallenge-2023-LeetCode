class Solution {
    public int searchInsert(int[] nums, int target) {
        int f = 0, r = nums.length-1;
        int m ;
        while(f <= r) {
            m = f + (r-f)/2;
            if (nums[m] == target) return m;
            if (nums[m] < target) {
                f = m + 1;
            }
            else {
                r = m-1;
            }
        }
        return f;
    }
}
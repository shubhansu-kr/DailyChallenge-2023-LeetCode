class Solution {
    public int[] shuffle(int[] nums, int n) {
        int i = 0, j = n, k = 0;
        int ans[] = new int[n*2];
        while(k < 2*n){
            ans[k++] = nums[i++];
            ans[k++] = nums[j++];
        }
        return ans;
    }
}
#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size();
        int totsum =0;
        for(int i =0;i<n;i++){
            totsum = totsum+nums[i];
        }
        int k = totsum;
        vector<vector<bool>>dp(n,vector<bool>(k+1,false));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        } 
        if(nums[0]<=k){
            dp[0][nums[0]]=true;
        }
       
        for(int ind =1;ind<n;ind++){
            for(int tar = 1;tar<=k;tar++){
                bool notTake = dp[ind-1][tar];
                bool take = false;
                if(nums[ind]<=tar){
                    take = dp[ind-1][tar-nums[ind]];
                }
                dp[ind][tar]=take||notTake;
            }
        }

        int mini = INT_MAX;
        for(int s1=0;s1<=totsum/2;s1++){
            if(dp[n-1][s1]==true){
                int diff = abs(totsum-s1-s1);
                mini=min(mini,diff);
            }
        }
        return mini;
        
    }
};

int main() {
    
}
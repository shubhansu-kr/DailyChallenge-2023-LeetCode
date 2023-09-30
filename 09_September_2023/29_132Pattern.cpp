// https://leetcode.com/problems/132-pattern/description/?envType=daily-question&envId=2023-09-30

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        if (n<3) return 0;
        vector<int> n_k;//keep track of the nums[k]
        vector<int> n_i(n);
        n_i[0]=nums[0];
        for(int i=1; i<n; i++)
            n_i[i]=min(n_i[i-1], nums[i]);
        for(int j=n-1; j>0; j--){
            if (nums[j]<=n_i[j]) continue;
            while(!n_k.empty()&& n_k.back()<=n_i[j]) 
                n_k.pop_back(); //nums[i]<nums[k]
            if(!n_k.empty() && n_k.back()<nums[j]) {
        //  cout<<"["<<n_i[j]<<","<<nums[j]<<","<<n_k.back()<<"]\n";
               return 1;
            }
            n_k.push_back(nums[j]);
        }
        return 0;
    }
};

int main () {
    
    return 0;
}
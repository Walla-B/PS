class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxnum = nums[0];
        int* dp = new int[n];
        dp[0] = nums[0];
        
        for (int i = 1 ; i< n; i++) {
            dp[i] = max(nums[i] + dp[i-1], nums[i]);
            maxnum = max(maxnum,dp[i]);
        }
        
        return maxnum;
    }
};
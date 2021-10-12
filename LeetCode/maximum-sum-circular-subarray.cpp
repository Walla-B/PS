class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int sum = nums[0];
        int subMax = nums[0];
        int totalMax = nums[0];
        int subMin = nums[0];
        int totalMin = nums[0];
        
        for (int i = 0 ; i < nums.size(); i++) {
            subMax = max(nums[i], subMax + nums[i]);
            totalMax = max(totalMax, subMax);
            
            subMin = min(nums[i], subMin + nums[i]);
            totalMin = min(totalMin, subMin);
            sum += nums[i];
            
        }
        
        if (sum == totalMin) return totalMax;
        return max(sum-totalMax, totalMax);
    }
};
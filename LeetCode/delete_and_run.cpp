class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        std::vector<int> data(n, 0);
        
        for(int num : nums) {
            data[num] += num;
        }
        int skip = 0;
        int take = 0;
        for (int i = 0 ; i < n ; i++) {
            int takei = data[i] + skip;
            int skipi = max(take, skip);
            
            take = takei;
            skip = skipi;
        }
        return max(take, skip);
    }
};
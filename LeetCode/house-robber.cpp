class Solution {
public:
    std::map<int, int> maxmoney;
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        return maxrob(nums, n);
    }
    
    int maxrob(vector<int>& nums, int n) {
        if (n == 0) return nums[0];
        if (n == 1) return max(nums[0], nums[1]);
        
        std::map<int,int>::iterator iter;
        iter = maxmoney.find(n);
        if (iter != maxmoney.end()) return iter->second;
        //compare robbing house n, but not house n-1
        //or robbing house n-1 but n
            
        int result = max(maxrob(nums,n-1), (maxrob(nums,n-2) + nums[n]));
        maxmoney.insert(pair<int,int>(n,result));
        return result;
    }
};
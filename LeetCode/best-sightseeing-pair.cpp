class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int result = 0;
        int localmax = values[0]; 
        
        for (int i = 0; i < values.size(); ++i) {
            localmax = max(localmax, values[i-1] + i - 1);
            result = max(result, values[i] - i + localmax);
        }
        
        return result;
    }
};
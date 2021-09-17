class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string s = "";
        if (n == 0) {
            return "";
        }
         
        sort(begin(strs), end(strs));
        
        for (int i = 0; i< strs[0].size(); i++) {
            if (strs[0][i] == strs[n-1][i]) {
                s += strs[0][i];
            }
            else
                break;
        }
        
        return s;
        
        
    }
};
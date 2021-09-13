class Solution {
public:
    string longestPalindrome(string s) {
        
        vector<int> even_seeds;
        vector<int> odd_seeds;
        int stringsize = s.size();
        
        for (int i = 0 ; i < stringsize - 2; i++) {
            if (s[i] == s[i+2]) {
                odd_seeds.push_back(i+1);
            }
            if (s[i] == s[i+1]) {
                even_seeds.push_back(i);
            }
        }
        if (s[stringsize - 2] == s[stringsize - 1]) {
            even_seeds.push_back(stringsize-2);
        }
        
        int maxnum = 0;
        int location = 0;
        int offset = 0;
        vector<int>::iterator iter;
        for (iter = odd_seeds.begin(); iter != odd_seeds.end(); iter++) {
            offset = 0;
            while(s[*iter - offset] == s[*iter + offset]) {
                if (*iter - offset < 0 || *iter + offset >= stringsize) {
                    break;
                }
                offset++;
            }
            
            if (2*offset+1 >= maxnum) {
                maxnum = 2*offset+1;
                location = *iter - offset;
            }
        }
        
        for (iter = even_seeds.begin(); iter != even_seeds.end(); iter++) {
            offset = 0;
            while(s[*iter-offset] == s[*iter+1+offset]) {
                if (*iter - offset < 0 || *iter + 1 + offset >= stringsize) {
                    break;
                }
                offset++;
            }
            if (2*offset >= maxnum) {
                maxnum = 2*offset;
                location = *iter - offset;
            }
        }
        
        return s.substr(location, maxnum);
        
        
    }
};
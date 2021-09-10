/*
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> submap;
        int maxnum = 0;
	    int head = 0;
	    int tail = 0;
	    int n = s.size();
    
	    if (!s.empty()) {
		    while (head < n && tail < n) {
			    if (submap.find(s[head]) == submap.end()) {
			    	submap.insert(pair<char, int>(s[head], head));
			    	head++;
		    	}
		    	else {
			    	tail = max(tail, submap.at(s[head]) + 1);
			    	submap.at(s[head]) = head;
			    	head++;
			    }
			    maxnum = max(maxnum, head - tail);
	    	}
	    }   
	    return maxnum;
    }
};
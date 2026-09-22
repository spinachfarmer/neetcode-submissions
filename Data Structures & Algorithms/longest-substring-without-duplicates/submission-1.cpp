class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxs = 0;
        int temp = 0;
        int n = s.size();

        if(n == 0) return 0;

        unordered_set <char> window;

        for(int r = 0; r < n; r++){ // always wnat to be shifting the right
            while(window.find(s[r]) != window.end()){ // while r is in set
                    window.erase(s[l]); // if right char is in set remove left
                    l++;
            }
            window.insert(s[r]);
            maxs = max(maxs, (r - l + 1));
           
        }

        return maxs;
        }
        
};

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map <char, int> freq;
        int l = 0;
        int n = s.size();
        int maxs = 0;
        int ret = 0;

        // loads the hashmap
        for (int r = 0; r < n; r++){
                freq[s[r]]++; // gets the frequency

                maxs = max(maxs, freq[s[r]]); 

                while((r-l+1) - maxs > k){ // while size of sliding window - max # of same letters is greater than k makes sure k is large enough to replace all the numberse in the window
                    freq[s[l]]--;
                    l++; // dhrinks the window
                }
                ret = max(ret, r-l+1); // gets the largest window size

            }
        return ret;
    }
    
};

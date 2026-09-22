class Solution {
public:
    bool isPalindrome(string s) {

        int l = 0;
        int r = s.size() - 1;

        while(l < r){
            while (l < r && !(isalpha(s[l]) || isdigit(s[l]))) l++;
            if(!islower(s[l])){
               s[l] =tolower(s[l]);
            }

            while (l < r && !isalpha(s[r])|| isdigit(s[r])) r--;
            if(!islower(s[r])){
                s[r] = tolower(s[r]);
            }

            if(s[l]!= s[r]) return false;

            l++;
            r--;
        }

        return true;
    }
};

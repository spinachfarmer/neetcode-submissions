class Solution:
    def isPalindrome(self, s: str) -> bool:
        """int l = 0;
        int r = len(s) - 1;
        while l < r :


        return s == s[-1]"""

        newStr = ''

        for c in s:
            if c.isalnum():
                newStr += c.lower() #makes new string of only lwoer case stuff 

        return newStr == newStr[::-1] # compares itself to the inverse
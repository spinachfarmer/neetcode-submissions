class Solution:
    def isPalindrome(self, s: str) -> bool:

        # convert to alphanumeric during loop 
        start = 0
        end = len(s) - 1

        # gotta use while cause conditino start != doesnt handle when they cross
        while start < end:
            # check if start or end char is alphanumeric
            if not s[start].isalnum():
                start += 1
                continue
            if not s[end].isalnum():
                end -= 1
                continue
            
            #compare start and end 

            if s[start].lower() != s[end].lower():
                return False
            else:
                start += 1
                end -= 1

        # if never returned false then should be good
        return True

        
        
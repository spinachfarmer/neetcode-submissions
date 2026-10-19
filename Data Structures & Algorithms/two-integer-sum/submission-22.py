class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        seen = {} # define dict

        for i, num in enumerate(nums):
            find = target - num
            if find in seen:
                return [seen[find],i]
            else: # not in seen then add 
                seen[num] = i
        return [] # shouldn't get here
        
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        temp = {}

        for i, num in enumerate(nums):
            if num in temp:
                return True
            temp[num] = i

        return False
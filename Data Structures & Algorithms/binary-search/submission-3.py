class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        # compare target to middle value search up and down keep splitting middle

        left = 0
        right = len(nums) - 1

        # condition is left < right basically if theres still stuff left to be searched
        while left <= right :
            mid = (left + right) // 2 #// goes towards neg inf int rounds to 0
            print(mid)
            if nums[mid] == target:
                return mid
            elif nums[mid] < target :
                left = mid + 1
            else: # if nums[mid] > target
                right = mid - 1

        return -1
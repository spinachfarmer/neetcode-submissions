class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        # dynamic sliding window track max pos diff 
      
        min = prices[0]
        maxProfit = 0

        for num in prices:
            if num < min:
                min = num
            else:
                currProfit = num - min
                if currProfit > maxProfit:
                    maxProfit = currProfit
        return maxProfit

            
    
        
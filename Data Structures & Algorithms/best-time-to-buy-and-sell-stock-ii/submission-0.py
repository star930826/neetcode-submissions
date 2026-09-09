class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        count = 0
        for i in range(len(prices)):
            if i>=1 and prices[i] > prices[i-1]:
                count += prices[i]-prices[i-1]
        return count
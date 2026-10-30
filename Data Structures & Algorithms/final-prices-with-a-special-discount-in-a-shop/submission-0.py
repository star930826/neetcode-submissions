class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        count = 0
        n = len(prices)
        for i in range(n):
            count = prices[i]
            for j in range(i+1,n):
                if prices[j] <= prices[i]:
                    prices[i] = prices[i] - prices[j]
                    break  
        return prices

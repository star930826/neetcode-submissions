class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        left = max(weights)
        right = sum(weights)
        
        def ship(capacity: int) -> bool:
            day = 1
            weight = 0
            for w in weights:
                if weight + w > capacity:
                    day += 1
                    weight = 0
                weight += w
            return day <= days
        
        while left < right:
            mid = (left + right) // 2
            if ship(mid):
                right = mid
            else:
                left = mid + 1
        return left
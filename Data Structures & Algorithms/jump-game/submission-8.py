class Solution:
    def canJump(self, nums: List[int]) -> bool:
        length = 0
        for i in range(len(nums)):
            if length < i:
                return False
            length = max(length,i+nums[i])
            
        return True   
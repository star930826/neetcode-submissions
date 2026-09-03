class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        count = 0
        max_sum = nums[0]

        for i in range(len(nums)):
            count = count + nums[i]

            max_sum = max(max_sum, count)
            if count < 0:
                count = 0

        return max_sum
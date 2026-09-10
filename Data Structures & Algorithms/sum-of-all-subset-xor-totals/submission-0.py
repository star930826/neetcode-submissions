class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        
        def dfs(index: int, current_xor: int) -> int:
            if index == len(nums):
                return current_xor
            
            withoutnum = dfs(index + 1,current_xor)
            withnum = dfs(index + 1,current_xor ^ nums[index])

            return withoutnum + withnum
        return dfs(0,0)
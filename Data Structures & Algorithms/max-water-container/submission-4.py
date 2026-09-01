class Solution:
    def maxArea(self, heights: List[int]) -> int:
        left=0
        right=len(heights)-1
        maxwater=0

        while right>left:
            newwater=(right-left)*min(heights[right],heights[left])
            maxwater=max(maxwater,newwater)
            
            if(heights[right]>heights[left]):
                left+=1
            else:
                right-=1
        return maxwater
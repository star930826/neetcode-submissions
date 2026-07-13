class Solution {
public:
    int maxArea(vector<int>& heights) {
        int right=heights.size()-1;
        int left=0;
        int ans=0;
        while(right>left){
            int current_area=(right-left)*min(heights[right],heights[left]);
            ans=max(ans,current_area);
            if(heights[right]>heights[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};

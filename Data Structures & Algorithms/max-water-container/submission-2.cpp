class Solution {
    //複習
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0;
        int right=heights.size()-1;
        int left=0;
        while(right>left){
            int n=(right-left)*min(heights[right],heights[left]);
            maxwater=max(n,maxwater);

            if(heights[right]>heights[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxwater;
    }
};

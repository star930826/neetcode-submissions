class Solution {
public:
    int maxArea(vector<int>& heights) {
        int right=heights.size()-1;
        int left=0;
        int ans=0;
        //從最外側開始往內找
        while(right>left){
            int current_area=(right-left)*min(heights[right],heights[left]);
            //面積=長度*兩側較低的那根柱子
            ans=max(ans,current_area);
            //比較之前最大面積跟現在的面積
            if(heights[right]>heights[left]){
                //若右側比左側高，左側往前一格
                left++;
            }
            else{
                right--;
                //平手或是左側高 右側往內縮
            }
        }
        return ans;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
            //把數字進行XOR，相同的就會消掉，剩下最後一個=答案
        }
        return ans;
    }
};

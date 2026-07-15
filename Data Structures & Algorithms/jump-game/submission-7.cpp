class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=1)return true;
        int far=0;
        for(int i=0;i<nums.size();i++){
            if(i>far)return false;
            if(nums[i]+i>far){
                far=nums[i]+i;
            }
            
        }
        return true;
    }
};

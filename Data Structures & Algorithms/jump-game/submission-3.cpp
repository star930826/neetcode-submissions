class Solution {

public:
    bool canJump(vector<int>& nums) {
        int len=0;
        if(nums.size()<=1)return true;
        for(int i=0;i<nums.size();i++){
            if(i>len)return false;
            if(i+nums[i]>len){
                len=i+nums[i];
            }
            if(len>=nums.size()-1){
                return true;
            }
        }
        return false;
    }
};

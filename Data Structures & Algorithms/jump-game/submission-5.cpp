class Solution {

public:
    bool canJump(vector<int>& nums) {
        int len=0;
        if(nums.size()<=1)return true;//小於等於一格，不用動就到終點了
        for(int i=0;i<nums.size();i++){
            if(i>len)return false;//若最遠距離小於目前位置false
            len=max(len,i+nums[i]);//看目前存的最遠距離跟先在這格能到的最遠距離哪一個遠
            if(len>=nums.size()-1){//若最遠距離已經碰到終點
                return true;
            }
        }
        return false;
    }
};

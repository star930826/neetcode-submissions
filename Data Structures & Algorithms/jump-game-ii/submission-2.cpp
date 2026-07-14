class Solution {
public:
    int jump(vector<int>& nums) {
        int now_len=0;
        int len=0;
        int jump=0;
        if(nums.size()<=1) return 0;
        for(int i=0;i<nums.size()-1;i++){
            len=max(len,i+nums[i]);
            if(i==now_len){
                jump++;
                now_len=len;
            }
        }
        return jump;
    }
};

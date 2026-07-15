class Solution {
    //複習
public:
    int jump(vector<int>& nums) {
        int now=0;
        int far=0;
        int jump=0;

        if(nums.size()<=1)return 0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+i>far) far=nums[i]+i;
            if(i==now){
                jump++;
                now=far;
            }
        }
        return jump;
    }
};

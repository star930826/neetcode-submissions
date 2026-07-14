class Solution {
public:
    int jump(vector<int>& nums) {
        int now_len=0;//第一格可以摸到的最遠距離
        int len=0;//最遠距離
        int jump=0;//跳躍次數
        if(nums.size()<=1) return 0;
        for(int i=0;i<nums.size()-1;i++){
            len=max(len,i+nums[i]);
            //一格一格往前探，看最遠摸到哪裡
            if(i==now_len){
                //如果目前位置已經碰到第一格可以碰到的最遠位置，那jump加一
                //並把該次步數可碰到的最遠距離更新成目前最遠距離
                jump++;
                now_len=len;
            }
        }
        return jump;
    }
};

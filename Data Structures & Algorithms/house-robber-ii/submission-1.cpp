class Solution {
    //複習
private:
    int iamrobber(vector<int>& nums,int start,int end){
        int p1=0;
        int p2=0;
        for(int i=start;i<end;i++){
            int current=max(nums[i]+p2,p1);
            p2=p1;
            p1=current;
        }
        return p1;
    }
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return nums[0];

        int rob_a=iamrobber(nums,1,nums.size());
        int rob_b=iamrobber(nums,0,nums.size()-1);

        return max(rob_a,rob_b);
    }
    
};

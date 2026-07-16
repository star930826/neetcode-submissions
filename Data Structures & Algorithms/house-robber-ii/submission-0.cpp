class Solution {
private:
    int count(vector<int>& nums,int start,int end){
        int p1=0;
        int p2=0;
        
        for(int i=start;i<end;i++){
            int current(max(p2+nums[i],p1));
            p2=p1;
            p1=current;
        }
        return p1;
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.empty()) return 0;
        int n = nums.size();

        int a=count(nums,0,n-1);
        int b=count(nums,1,n);

        return max(a,b);
    }
};

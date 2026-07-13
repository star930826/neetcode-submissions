class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        int mid=0;

        while(right>=left){
            mid=(right-left)/2+left;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                right=mid-1;
            }
            if(nums[mid]<target){
                left=mid+1;
            }
        }
        return -1;
    }
};

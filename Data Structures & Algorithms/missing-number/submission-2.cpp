class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums){
            seen.insert(num);
            //把數字丟進去存起來
        }
        for(int i=0;i<nums.size();i++){
            if(seen.count(i)==0){
                //若存這數字ˇ的這格是空的 回傳
                return i;
            }
        }
    }
};

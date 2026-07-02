class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums){
            seen.insert(num);
        }
        for(int i=0;i<nums.size();i++){
            if(seen.count(i)==0){
                return i;
            }
        }
    }
};

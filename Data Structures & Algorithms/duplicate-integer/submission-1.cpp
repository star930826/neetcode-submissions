class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> seen;
       for(int num : nums){
            if(seen.count(num)){
            //如果已經存在
            return true;
            }
            seen.insert(num);
            //存進去insert的num這格
       }
       return false;
    }
};
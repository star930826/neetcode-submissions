class Solution {
private:
    vector<vector<int>> ans;
    vector<int> current;
    void dfs(vector<int>& nums,int index){
        if(index == nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[index]);
        dfs(nums,index+1);

        current.pop_back();
        dfs(nums,index+1);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        current.clear();
        dfs(nums,0);
        return ans;
    }
};

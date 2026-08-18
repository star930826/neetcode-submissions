class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<bool> used;

    void backtrack(vector<int>& nums) {
        if (path.size() == nums.size()) {
            result.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i]) {
                continue;
            }

            // 選擇 nums[i]
            path.push_back(nums[i]);
            used[i] = true;

            // 繼續往下一層
            backtrack(nums);

            // 回溯
            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        used.resize(nums.size(), false);

        backtrack(nums);

        return result;
    }
};
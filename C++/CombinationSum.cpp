class Solution {
public:
    void backtrack(vector<int>& curr, vector<vector<int>>& res, const vector<int>& nums, int total, int index, int target){
        if (total == target){
            res.push_back(curr);
            return;
        }
        if (index >= nums.size() || total > target) return;
        curr.push_back(nums[index]);
        backtrack(curr, res, nums, total + nums[index], index, target);
        curr.pop_back();
        backtrack(curr, res, nums,  total, index + 1, target);
        
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(curr, res, nums, 0, 0, target);
        return res;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer(2, -1);
        for (int i = 0; i < nums.size(); ++i){
            for (int k = i + 1; k < nums.size(); ++k){
                if (nums[i] + nums[k] == target){
                    answer[0] = i;
                    answer[1] = k;
                    return answer;
                }
            }
        }
        return answer;

    }
};
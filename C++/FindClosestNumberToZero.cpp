class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (abs(nums[i]) < abs(min)) min = nums[i];
            else if (abs(nums[i]) == abs(min)) {
                min = (nums[i] > min) ? nums[i] : min;
            }
        }
        return min;
    }
};
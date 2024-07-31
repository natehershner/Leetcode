class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int one = 0, two = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] < 10) one += nums[i];
            else two += nums[i];
        }
        return (one == two) ? false : true;
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> red;
        vector<int> white;
        vector<int> blue;
        for (int num : nums){
            if (num == 0) red.push_back(num);
            if (num == 1) white.push_back(num);
            if (num == 2) blue.push_back(num);
        }
        vector<int> res;
        for (int num: red) res.push_back(num);
        for (int num: white) res.push_back(num);
        for (int num: blue) res.push_back(num);
        for (int i = 0; i < nums.size(); i++) nums[i] = res[i];
    }
};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int total = 0;
        int j = 0;
        for (int i = 0; i < k; i++) total += nums[i];
        int highest = total;
        for (unsigned int i = k; i < nums.size(); i++){
            total -= nums[j];
            j++;
            total += nums[i];
            if (total > highest) highest = total;
        }
        return highest / (double) k;
    }
};
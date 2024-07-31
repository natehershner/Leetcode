class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft = 0;
        int sumRight = 0;
        unsigned int i = 0;
        unsigned int j = nums[nums.size() - 1];
        while (i < j){
            sumLeft += nums[i];
            sumRight += nums[j];
            if (sumLeft == sumRight) return i + 1;
            if (sumLeft > sumRight) i++;
            else j--;
        }
        return -1;
        
    }
};
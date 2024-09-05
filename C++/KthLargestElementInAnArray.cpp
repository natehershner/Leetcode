class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        make_heap(nums.begin(), nums.end());
        int i = 0;
        while (i < k - 1){
            pop_heap(nums.begin(), nums.end());
            nums.pop_back();
            i++;
        }
        return nums.front();

    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() -1);
    }
    int binarySearch(vector<int>& nums, int target, int l, int h){
        int mid = l + (h - l) / 2;
        if (l <= h){
        if (nums.at(mid) == target){
            return mid;
        }
        else if (nums.at(mid) < target){
            return binarySearch(nums, target,mid + 1, h);
        }
        else{
            return binarySearch(nums, target,l,mid-1);
        }
    }
        return mid;
    }
};
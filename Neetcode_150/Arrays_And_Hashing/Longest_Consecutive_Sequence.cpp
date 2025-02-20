class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_set<int> res;
            int maxLength = 0, currLength = 0;
            for (int i = 0; i < nums.size(); i++){
                res.insert(nums[i]);
            }
            for (int i = 0; i < nums.size(); i++){
                if (res.find(nums[i] - 1) == res.end()){
                    int curr = nums[i];
                    currLength = 1;
                    while(res.find(++curr) != res.end()) currLength++;
                    if (currLength > maxLength) maxLength = currLength;
                }
            }
            return maxLength;
        }
    };
    
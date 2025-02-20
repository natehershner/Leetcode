class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            unordered_set<int> set;
            for (int num : nums){
                if (set.find(num) != set.end()) return true;
                set.insert(num);
            }
            return false;
        }
    };
    
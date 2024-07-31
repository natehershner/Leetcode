class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;
        for (auto c : nums){
            map[c]++;
            if (map[c] == 2) return true;
        }
        return false;
    }
};
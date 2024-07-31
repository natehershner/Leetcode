class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> first;
        unordered_map<int, int> second;
        vector<int> returnOne;
        vector<int> returnTwo;
        vector<vector<int>> toReturn;
        for (int i: nums1) first[i] += 1;
        for (int i: nums2) second[i] += 1;
        for (int i: nums1){
            if (second[i] == 0){
                returnOne.push_back(i);
                second[i] += 1;
            }
        }
        for (int i: nums2){
            if (first[i] == 0){
                returnTwo.push_back(i);
                first[i] += 1;
            }
        }
        toReturn.push_back(returnOne);
        toReturn.push_back(returnTwo);
        return toReturn;   
    }
};
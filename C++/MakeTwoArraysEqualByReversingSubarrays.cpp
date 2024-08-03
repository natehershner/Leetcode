class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int map1[1001] = {0};
        int map2[1001] = {0};
        for (int i = 0; i < target.size(); i++){
            map1[target[i]]++;
        }
        for (int i = 0; i < arr.size(); i++){
            map2[arr[i]]++;
        }
        for (int i = 0; i < 1001; i++){
            if (map1[i] != map2[i]) return false;
        }
        return true;
    }
};
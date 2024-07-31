class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int,int> map;
        for (int i = 0; i < arr.size(); i++){
            map[arr[i]]++;
        }
        std::unordered_map<int,int> occurences;
        for (std::pair pair : map){
            occurences[pair.second]++;
            if (occurences[pair.second] == 2) return false;
        }
        return true;
    }
};
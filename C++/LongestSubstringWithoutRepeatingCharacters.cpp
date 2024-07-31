class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> map;
        if (s.size() == 1) return 1;
        int j = 0;
        int max = 0;
        int i = 0;
        while (j < s.size() && i < s.size()){
            char curr = s[j];
            if (map[curr] > 0){
                if (i != j){
                    map[s[i]]--;
                    if ((j - i) > max) max = (j - i);
                    i++;
                }
                else j++;
            }
            else{
                map[curr]++;
                j++;
            }
        }
        
        if (map[j] < 2 && s.size() - i > max) max = s.size() - i;
        return max;
        
    }
};
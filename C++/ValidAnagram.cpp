class Solution {
public:
    bool isAnagram(string s, string t) { 
        if (s.size() != t.size()) return false;
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for (int i = 0; i < s.size(); i++){
            map1[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++){
            map2[t[i]]++;
        }
        for (const auto &c : map1){
            if (map1[c.first] != map2[c.first]) return false;
        }
        return true;
    }
};
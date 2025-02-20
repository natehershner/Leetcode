class Solution {
    public:
        bool isAnagram(string s, string t) {
            vector<int> s1(26, 0);
            vector<int> s2(26, 0);
            for (char c : s) s1[c - 'a']++;
            for (char c : t) s2[c - 'a']++;
            for (int i = 0; i < 26; i++){
                if (s1[i] != s2[i]) return false;
            }
            return true;
        }
    };
    
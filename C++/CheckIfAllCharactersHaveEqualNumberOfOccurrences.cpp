class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int occur[26] = {0};
        for (int i = 0; i < s.size(); i++){
            occur[s[i] - 'a']++;
        }
        int num = occur[s[0] - 'a'];
        for (int i = 0; i < 26; i++){
            if (occur[i] != 0 && occur[i] != num) return false;
        }
        return true;
    }
};
class Solution {
public:
    bool checkSub (const std::string &str, const int* freq1, const int* freq2){
        for (int i = 0; i < str.size(); i++){
            char c = str[i];
            if (freq1[c - 'a'] != freq2[c - 'a']) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int freq1[26] = {0};
        int freq2[26] = {0};
        char letterToRemove = s2[0];
        for (int k = 0; k < s1.size(); k++) freq1[s1[k] - 'a'] += 1;
        for (int k = 0; k < s1.size(); k++) freq2[s2[k] - 'a'] += 1;
        int i = 0;
        int j = s1.size() - 1;
        while (j < s2.size()){
            if (checkSub(s2.substr(i, s1.size()), freq1, freq2)){
                return true;
            }
            freq2[letterToRemove - 'a'] -= 1;
            i++;
            j++;
            if (j < s2.size() && i < s2.size()){
                letterToRemove = s2[i];
                freq2[s2[j] - 'a'] += 1;
            }
        }
        return false;
    }
};
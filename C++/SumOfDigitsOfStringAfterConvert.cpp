class Solution {
public:
    int getLucky(string s, int k) {
        string curr = "";
        for (int i = 0; i < s.size(); i++) {
            curr += to_string(s[i] - 'a' + 1);
        }
        int res = 0;
        while (k--) {
            res = 0;
            for (char c : curr) {
                res += c - '0'; 
            }
            curr = to_string(res); 
        }
        return res;
    }
};

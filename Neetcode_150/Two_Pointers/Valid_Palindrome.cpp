class Solution {
    public:
        bool alphaNum(char c) {
            return (c >= 'A' && c <= 'Z' || 
                    c >= 'a' && c <= 'z' || 
                    c >= '0' && c <= '9');
        }
        bool isPalindrome(string s) {
            int l = 0, r = s.size() - 1;
            while (l < r){
                while (l < r && !alphaNum(s[l])) l++;
                while (r > l && !alphaNum(s[r])) r--;
                if (tolower(s[l]) != tolower(s[r])) return false;
                l++;
                r--;
            }
            return true;
        }
    };
    
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string res = "";
        string curr = "";
        for (int i = 0; i < min(str1.size(), str2.size()); i++){
            if (str1[i] == str2[i]) res += str1[i];
            else return curr;
            if (str1.size() % res.size() == 0 && str2.size() % res.size() == 0) curr = res;

        }
        return curr;
    }
};
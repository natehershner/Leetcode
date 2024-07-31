class Solution {
public:
    string removeStars(string s) {
        string newString = "";
        stack<char> chars;
        for (char c : s){
            if (c != '*') chars.push(c);
            else chars.pop();
        }
        while (!chars.empty()){
            newString += chars.top();
            chars.pop();
        }
        reverse(newString.begin(), newString.end());
        return newString;
    }
};
class Solution {
public:
    void backtrack(vector<string>& res, string& curr, int open, int close, int n) {
        if (curr.size() == n * 2) {
            res.push_back(curr);
            return;
        }
        if (open < n) {
            curr.push_back('(');
            backtrack(res, curr, open + 1, close, n);
            curr.pop_back();
        }
        if (close < open) {
            curr.push_back(')');
            backtrack(res, curr, open, close + 1, n);
            curr.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr;
        backtrack(res, curr, 0, 0, n);
        return res;
    }
};

class Solution {
    
public:

    void backtrack(vector<int>& curr, vector<vector<int>>& res, int i, int n, int k){
        if (curr.size() == k){
            res.push_back(curr);
            return;
        }
        if (i > n) return;
        curr.push_back(i);
        backtrack(curr, res, i + 1, n ,k);
        curr.pop_back();
        backtrack(curr, res, i + 1, n, k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(curr, res, 1, n, k);
        return res;
    }
};
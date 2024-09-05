class Solution {
public:
    void backtrack(const vector<vector<char>>& board, const string& word, bool& found, vector<vector<bool>>& vis, int i, int j, int k){
        if (k == word.size()){
            found = true;
            return;
        }
        
        if (found || i >= board.size() || j >= board[0].size() || i < 0 || j < 0 || board[i][j] != word[k] || vis[i][j]){
            return;
        }
        vis[i][j] = true;
        for (const auto& direction : dir){
            backtrack(board, word, found, vis, i + direction.first, j + direction.second, k + 1);
        }
        vis[i][j] = false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        string curr;
        bool found = false;
        vector<vector<bool>>vis(board.size(), vector<bool>(board[0].size(), false));
        
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[i].size(); j++){
                if (word[0] ==  board[i][j]){
                    backtrack(board, word, found, vis, i, j, 0);
                    if (found) return true;
                }
            }
        }
        return false;
    }
    private:
        vector<pair<int, int>> dir = {
            {1,0},
            {-1,0},
            {0,1},
            {0,-1}
        };


};